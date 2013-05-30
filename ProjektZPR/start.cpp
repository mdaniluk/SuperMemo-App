#include "start.h"
#include <algorithm>
#define BOOST_FILESYSTEM_VERSION 3
#define BOOST_FILESYSTEM_NO_DEPRECATED 

Start::Start()
{

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

void Start::setNextDateForEach(vector<int> answersJudged){
	
	//for (vector<PQcard>::const_iterator i=vectorPQ.begin();i!=vectorPQ.end(); ++i){
	//	vectorPQ.at(i)->dateOfNextQuestion(answersJudged.at(i));

	//}
	/*for_each(vectorPQ.begin(), vectorPQ.end(), [&evenCount] (int n){
	
		vectorPQ.at(n)->dateOfNextQuestion(answersJudge.at(n));
	});
		
		*/	
	//qDebug()<< "jooooooo"+ deck_->getQuestionCardVector().size();
	for (int n=0; n<deck_->getQuestionCardVector().size(); n++){
		
		deck_->getQuestionCardVector().at(n)->dateOfNextQuestion(answersJudged.at(n));
	}
	const char* filename = "ala_i_kot.dat";
	saveToFileCurrentState(*deck_,filename);
}

void  Start::saveToFileCurrentState(const Deck &s, const char* filename)
{
	try{
		
		std::ofstream ofs(filename);
		
		boost::archive::text_oarchive oa(ofs);
		oa << s;
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
		boost::archive::text_iarchive ia(ifs);
		
		ia >> s;
	}
	catch(std::exception e) { 
		std::cout << e.what() << std::endl; exit(1); }
}

void Start::continueClicked(std::string name){

	qDebug() << "CONTINUE";
}
void Start::deleteCourse(std::string course){
	const fs::path root = "Resources/" + course + ".xml";
	fs::remove(root);
	filesXml.erase(std::remove(filesXml.begin(), filesXml.end(), course + ".xml") , filesXml.end());	
}