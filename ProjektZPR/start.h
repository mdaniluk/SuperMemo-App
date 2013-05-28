#pragma once
#include <boost/filesystem.hpp>
#include "deck.h"
namespace fs = ::boost::filesystem;

class Start
{
public:
	Start();
	~Start();
	void setListOfFiles();
	std::vector<std::string> getListOfFiles(){ return filesXml;}
	Deck* getDeck() {return deck_;}
	void chooseCourse(std::string course);
	void deleteCourse(std::string course);
private:
	std::vector<std::string> filesXml;
	Deck* deck_;
};

