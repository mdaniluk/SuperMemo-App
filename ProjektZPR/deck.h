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
#include <memory>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
#include <boost/shared_ptr.hpp>
 
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>
#include <boost/archive/xml_oarchive.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/wrapper.hpp>
#include <boost/serialization/split_member.hpp>
 
using namespace boost;

#include "Exception.h"
using std::list;
using std::vector;
using std::pair;
typedef boost::shared_ptr<QuestionCard> PQcard;
// usunac niepotrzebne includy

class Deck: public mpl::false_
{
public:
	Deck();
	Deck(QString filename);
	// Tworzymy nowy kurs
	vector<PQcard> getQuestionCardVector() {return vectorPQ;}
	
	~Deck();


	friend class boost::serialization::access;
	
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
