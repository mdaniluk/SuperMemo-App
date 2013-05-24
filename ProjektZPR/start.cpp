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

void Start::chooseCourse(std::string course){
}

void Start::deleteCourse(std::string course){
	const fs::path root = "Resources/" + course + ".xml";
	fs::remove(root);
	filesXml.erase(std::remove(filesXml.begin(), filesXml.end(), course + ".xml") , filesXml.end());	
}