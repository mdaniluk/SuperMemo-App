#include "schedule.h"
#include <boost/filesystem.hpp>

#define BOOST_FILESYSTEM_VERSION 3
#define BOOST_FILESYSTEM_NO_DEPRECATED 
namespace fs = ::boost::filesystem;

Schedule::Schedule(Controller *controller, View *parent): QDialog(parent), myView_(parent), myController_(controller)
{
	setAttribute(Qt::WA_DeleteOnClose, true);
	setupUi(this);
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(QImage("images/tlo.jpg")));
	this->setPalette(palette);
	setListOfCourses();
	show();
}

Schedule::~Schedule()
{

}

void Schedule::setListOfCourses(){
	filesTxt.clear();
	const fs::path root = "./";
	const std::string extension = ".txt";

	if(!fs::exists(root) ) return;

	if(fs::is_directory(root)){
		fs::recursive_directory_iterator it(root);
		fs::recursive_directory_iterator endit;
		while(it != endit){
			if( fs::is_regular_file(*it) && it->path().extension() == extension){
				filesTxt.push_back(it->path().filename().string() );
			}
			++it;
		}
	}
	
	coursesList->clear();
	for(int i = 0; i < filesTxt.size(); i++){
		Deck deck;
		loadFromFileCurrentState(deck, filesTxt[i].c_str());
		int numberOfTaskToRevision = 0;
		boost::gregorian::date dateNextRevision;
		dateNextRevision = boost::gregorian::date(2999,01,10);
		for(int k = 0; k < deck.getQuestionCardVector().size(); k++){
			boost::gregorian::date dateOfRevision = deck.getQuestionCardVector().at(k)->getNextDate();
			boost::gregorian::date now = boost::gregorian::day_clock::local_day();
			if(now >= dateOfRevision)
				numberOfTaskToRevision++;
			else{
				if(dateNextRevision > dateOfRevision)
					dateNextRevision = dateOfRevision;
			}
		}
		if(numberOfTaskToRevision != 0){
			std::string course = filesTxt[i].substr(0,filesTxt[i].length() - 4);
			coursesList->addItem(QString::fromStdString(course) );
		}
		else{
			std::string course = filesTxt[i].substr(0,filesTxt[i].length() - 4);
			course.append(" - ");
			course.append(to_simple_string(dateNextRevision) );
			listLater->addItem(QString::fromStdString(course) );
		}
		
	}
}
void Schedule::loadFromFileCurrentState( Deck &s, const char* filename)
{
	try{
	
		std::ifstream ifs(filename);
		if (!ifs.is_open()) throw LackFile(filename);
		boost::archive::text_iarchive ia(ifs);
		
		
		ia >> s;
		ifs.close();
	}
	catch(std::exception e) { 
		qDebug() << QString::fromStdString(e.what()) ; exit(1); }
	
}
