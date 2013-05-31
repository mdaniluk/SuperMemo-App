#include "start.h"
#include <algorithm>
#define BOOST_FILESYSTEM_VERSION 3
#define BOOST_FILESYSTEM_NO_DEPRECATED 

Start::Start()
{
	deck_= new Deck(QString::fromStdString("Resources/ciekawostki.xml"));
}


Start::~Start()
{
}

void Start::setListOfFiles(){
	filesXml.clear();
	const fs::path root = "Resources/";
	const std::string extension = ".xml";

	if(!fs::exists(root) ) return;

	if(fs::is_directory(root)){
		fs::recursive_directory_iterator it(root);
		fs::recursive_directory_iterator endit;
		while(it != endit){
			if( fs::is_regular_file(*it) && it->path().extension() == extension){
				filesXml.push_back(it->path().filename().string() );
			}
			++it;
		}
	}
}

void Start::setNextDateForEach(vector<int> answersJudged, std::string courseName){
	
	
	for (int n=0; n<deck_->getQuestionCardVector().size(); n++){
		
		deck_->getQuestionCardVector().at(n)->dateOfNextQuestion(answersJudged.at(n));
	}
	std::string tmp = courseName + ".dat";
	const char* filename = tmp.c_str();
	qDebug() << filename;
	//const char* filename =courseName + ".dat";
	saveToFileCurrentState(*deck_,filename);
}

void  Start::saveToFileCurrentState(const Deck &s, const char* filename)
{
	try{
		
		std::ofstream ofs(filename);
		
		boost::archive::text_oarchive oa(ofs);
		oa << s;
		ofs.close();
	}
	catch(std::exception e) { std::cout << e.what() << std::endl; exit(1); }
}
void Start::chooseCourse(std::string course){
	deck_= new Deck(QString::fromStdString("Resources/" + course + ".xml"));
}

void Start::loadFromFileCurrentState( Deck &s, const char* filename)
{
	try{
	
		std::ifstream ifs(filename);
		if (!ifs.is_open()) throw LackFile(filename);
		boost::archive::text_iarchive ia(ifs);
		
		ia >> BOOST_SERIALIZATION_NVP(deck_);
		//ia >> s;
		ifs.close();
	}
	catch(std::exception e) { 
		qDebug() << QString::fromStdString(e.what()) ; exit(1); }
}

void Start::continueClicked(std::string name){
	
	
	//  IFa walnac mozna 
	try{
		name = name +".dat";
		const char* filename = name.c_str();
		loadFromFileCurrentState(*deck_, filename);
	}
	catch (LackFile e){
		 e.returnMessage();
	}
	
	
}
void Start::deleteCourse(std::string course){
	const fs::path root = "Resources/" + course + ".xml";
	fs::remove(root);
	filesXml.erase(std::remove(filesXml.begin(), filesXml.end(), course + ".xml") , filesXml.end());	
}