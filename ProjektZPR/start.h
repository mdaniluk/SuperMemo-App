#pragma once
#include <boost/filesystem.hpp>
namespace fs = ::boost::filesystem;

class Start
{
public:
	Start();
	~Start();
	void setListOfFiles();
	std::vector<std::string> getListOfFiles(){ return filesXml;}
	void chooseCourse();
private:
	std::vector<std::string> filesXml;
};

