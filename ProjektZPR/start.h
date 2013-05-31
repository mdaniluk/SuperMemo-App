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
#include <memory>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

 
#include <boost/shared_ptr.hpp>
 
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>
#include <boost/archive/xml_oarchive.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/split_member.hpp>
#include <boost/serialization/utility.hpp>
#include <boost/serialization/wrapper.hpp>
#include <boost/archive/xml_woarchive.hpp>
#include <boost/archive/xml_wiarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>

using namespace std;
using namespace boost;
namespace fs = ::boost::filesystem;
typedef boost::shared_ptr<Deck> PDeck;
// usunac niepotrzebne includy
class Start
{
public:
	Start();
	~Start();
	void setListOfFiles();
	std::vector<std::string> getListOfFiles(){ return filesXml;}
	Deck * getDeck() {return deck_;}
	PDeck getDecknew() {return decknew_;}
	void chooseCourse(std::string course);
	void deleteCourse(std::string course);
	void setNextDateForEach(vector<int> answersJudged, std::string courseName);
	void saveToFileCurrentState(const Deck &s, const char* filename);
	void loadFromFileCurrentState(Deck &s,  const char* filename);
	void continueClicked(std::string name);

	

private:
	std::vector<std::string> filesXml;
	Deck *deck_;
	PDeck decknew_;
};

