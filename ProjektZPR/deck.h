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
	Deck(QString filename);
	// Tworzymy nowy kurs


	~Deck();

private:
	friend class boost::serialization::access;
	
};

#endif // DECK_H
