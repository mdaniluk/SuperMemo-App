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
#include <memory>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <boost/shared_ptr.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/split_member.hpp>
#include <boost/serialization/utility.hpp>
using namespace std;
using namespace boost;
namespace fs = ::boost::filesystem;
typedef boost::shared_ptr<Deck> PDeck;


namespace fs = ::boost::filesystem;
/**
 * Class represents logic of Start Menu Dialog
 * @author Piotr Maleci & Michal Daniluk
 *
 */

class Start
{
public:
	Start();
	~Start();
	/// function to set lists of file in the course window
	void setListOfFiles();
	/// function to get lists of file
	std::vector<std::string> getListOfFiles(){ return filesXml;}
	/// function to get Deck object
	Deck * getDeck() {return deck_;}
	/// function to get PDeck object
	PDeck getDecknew() {return decknew_;}
	/// function to perform action after choose button clicked
	void chooseCourse(std::string course, bool flag);
	/// function to perform action after delete button clicked
	void deleteCourse(std::string course);
	/// function to count next date for each question, implementation of SM2 algorithm
	void setNextDateForEach(vector<int> answersJudged, std::string courseName);
	/// serialization of current object state
	void saveToFileCurrentState(const Deck &s, const char* filename);
	/// load state of object from file
	void loadFromFileCurrentState(Deck &s,  const char* filename);
	/// function to perform action after continue button clicked
	void continueClicked(std::string name);
	/// field to protect from unwanted behaviour of aplication
	bool flag_;

	

private:
	///vector of file which are about to be on courses list
	std::vector<std::string> filesXml;
	Deck *deck_;
	PDeck decknew_;
};

