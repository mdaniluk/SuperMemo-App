#ifndef DECK_H
#define DECK_H
#include "questioncard.h"
#include "Exception.h"
#include <QObject>
#include <QFile>
#include <QtCore>
#include <QDebug>
#include <QtXml>
#include <QString>
#include <QMessageBox>
#include <vector>
#include <memory>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <boost/shared_ptr.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/split_member.hpp>
 
using namespace boost;
using namespace std;
using std::list;
using std::vector;
using std::pair;
typedef boost::shared_ptr<QuestionCard> PQcard;

/**
 * Class represents collection of questions and answers which are showed after users action. (Press apropriate button).
 * Class in its constructor loads from xml file all information.
 * @author Piotr Malecki & Michal Daniluk
 *
 */

class Deck
{
public:
	Deck();
	///constructor with file which is loaded
	Deck(QString filename);
	/// function to get vector of PQcard
	vector<PQcard> getQuestionCardVector() {return vectorPQ;}
	
	~Deck();


	friend class boost::serialization::access;
	/// vector of smart pointers to QuestionCard objects
	vector<PQcard> vectorPQ; 
	int a;
 
	template<class Archive>										
    void save(Archive & ar, const unsigned int version) const
    {
        
	
		ar & BOOST_SERIALIZATION_NVP(a);
		ar & BOOST_SERIALIZATION_NVP(vectorPQ);
    }

	template<class Archive>										
    void load(Archive & ar, const unsigned int version) 
    {
        
	
		ar & BOOST_SERIALIZATION_NVP(a);
		ar & BOOST_SERIALIZATION_NVP(vectorPQ);
    }
	BOOST_SERIALIZATION_SPLIT_MEMBER()
};
BOOST_CLASS_VERSION(Deck, 1)
//BOOST_MPL_ASSERT((serialization::is_wrapper<T>))

#endif // DECK_H
