#ifndef DECK_H
#define DECK_H
#include "questioncard.h"
#include <QObject>
#include <boost/foreach.hpp>
#include <boost/serialization/nvp.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/tuple/tuple.hpp>
#include <list>
#include <iostream>
#include <vector>
#include <map>
#include "Exception.h"
using std::list;
using std::pair;
typedef boost::shared_ptr<QuestionCard> PQcard;

class Deck
{
public:
	Deck();
	// Tworzymy nowy kurs
	Deck(std::stringstream& fileContent);


	~Deck();

private:
	friend class boost::serialization::access;
	
};

#endif // DECK_H
