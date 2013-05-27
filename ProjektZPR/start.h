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
	void chooseCourse(std::string course);
	void deleteCourse(std::string course);
private:
	std::vector<std::string> filesXml;
};

