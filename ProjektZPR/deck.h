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
	void setNextDateForEach(vector<int> answersJudged);
	~Deck();

private:
	friend class boost::serialization::access;
	vector<PQcard> vectorPQ;
};

#endif // DECK_H
