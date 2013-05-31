#pragma once
#include <boost/filesystem.hpp>
#include "deck.h"
#include <boost/serialization/nvp.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <fstream>
#include <streambuf>
#include <cstdio>
#include <boost/archive/xml_iarchive.hpp>
#include <boost/archive/xml_oarchive.hpp>
#include <boost/serialization/nvp.hpp>
#include <boost/serialization/shared_ptr.hpp>
namespace fs = ::boost::filesystem;

class Start
{
public:
	Start();
	~Start();
	void setListOfFiles();
	std::vector<std::string> getListOfFiles(){ return filesXml;}
	Deck* getDeck() {return deck_;}
	Deck* getDecknew() {return decknew_;}
	void chooseCourse(std::string course);
	void deleteCourse(std::string course);
	void setNextDateForEach(vector<int> answersJudged, std::string courseName);
	void saveToFileCurrentState(const Deck &s, const char* filename);
	void loadFromFileCurrentState( Deck &s, const char* filename);
	void continueClicked(std::string name);

private:
	std::vector<std::string> filesXml;
	Deck* deck_;
	Deck* decknew_;
};

