#include "start.h"
#define BOOST_FILESYSTEM_VERSION 3
#define BOOST_FILESYSTEM_NO_DEPRECATED 

Start::Start()
{

}


Start::~Start()
{
}

namespace fs = ::boost::filesystem;
void Start::setListOfFiles(){
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

