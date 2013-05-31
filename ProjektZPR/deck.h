#ifndef DECK_H
#define DECK_H
#include "questioncard.h"
#include <QObject>
#include <QFile>
#include <QtCore>
#include <QDebug>
#include <QtXml>
#include <QString>
#include <QMessageBox>
#include <QXmlStreamReader>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <list>
#include <iostream>
#include <vector>
#include <map>
#include "Exception.h"
using std::list;
using std::vector;
using std::pair;
typedef boost::shared_ptr<QuestionCard> PQcard;

class Deck
{
public:
	Deck();
	Deck(QString filename);
	// Tworzymy nowy kurs
	vector<PQcard> getQuestionCardVector() {return vectorPQ;}
	
	~Deck();

private:
	friend class boost::serialization::access;
	
 
	template<class Archive>										
    void serialize(Archive & ar, const unsigned int version)
    {
        
	
		ar & BOOST_SERIALIZATION_NVP(a);
		ar & BOOST_SERIALIZATION_NVP(vectorPQ);
    }
	vector<PQcard> vectorPQ; 
	int a;
};

#endif // DECK_H
