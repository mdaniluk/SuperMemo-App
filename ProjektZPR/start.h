#pragma once
#include <boost/filesystem.hpp>
#include "deck.h"
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
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
	void setNextDateForEach(vector<int> answersJudged);
	void saveToFileCurrentState(const Deck &s, const char* filename);
	void loadFromFileCurrentState( Deck &s, const char* filename);
	void continueClicked(std::string name);
private:
	std::vector<std::string> filesXml;
	Deck* deck_;
};

