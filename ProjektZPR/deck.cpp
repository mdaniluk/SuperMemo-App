#include "deck.h"

// konstruktor klasy Deck wczytuje plik xml do listy wskaźników do klasy QuestionCard. 
Deck::Deck(QString filename)
{	
	
	PQcard card;
	QDomDocument doc;
	QFile file(filename);
	QTextStream out(&file);
	list<PQcard> temp;
	if (!file.open(QIODevice:: ReadOnly | QIODevice::Text)) {
		qDebug() << "Failed to open File";	
	}

	else{
		if (!doc.setContent(&file)){
			qDebug() << "Failed to load File";
			}
		out.setCodec("UTF-8");
		file.close();
	}
	
	QDomElement root = doc.firstChildElement("SuperMemo");

	QDomElement set = doc.namedItem("SuperMemo").toElement();

	 if ( set.isNull() ) {
    qWarning() << "No <supermoemo> element found at the top-level "
		<< "of the XML file!";}

	 
	 QDomNodeList items = doc.elementsByTagName("Task");
	
	 for (int i =1; i<=items.count(); i++){
		 QDomNode itemnode = items.at(i-1);
		 qDebug()<<(itemnode.firstChild().toElement().text());
		  
		 
		 if ((itemnode.lastChild().toElement().tagName())==("AnswerOpen") && (itemnode.toElement().attribute("Id")).toInt()==i){
		 // question open

		qDebug()<<"Otwarte";
		card=PQcard(new QuestionCard((itemnode.firstChild().toElement().text()).toStdString(), (itemnode.lastChild().toElement().text()).toStdString(),  (itemnode.toElement().attribute("Id")).toInt(), true ));
		temp.push_back(card);
		 }

		 else{
		 //question close
		CloseAnswer answer;
		QDomElement close=  itemnode.lastChild().toElement();
		QDomNodeList tmplist =  close.childNodes();

		for (int i=0; i<=tmplist.count(); i++){

			qDebug() << tmplist.item(i).toElement().text() + "    :)    " + tmplist.item(i).toElement().attribute("Value");
			answer.push_back( std::make_pair((tmplist.item(i).toElement().text()).toStdString() ,(tmplist.item(i).toElement().attribute("Value")).toStdString()));
		}
		
		card=PQcard(new QuestionCard((itemnode.firstChild().toElement().text()).toStdString(), answer,  (itemnode.toElement().attribute("Id")).toInt(), false ));
		temp.push_back(card);
		 qDebug()<<"Zamkniete";
		 } 
	 }
	
	 vectorPQ.reserve(temp.size());
	 std::copy(temp.begin(), temp.end(), std::back_inserter(vectorPQ));
}

Deck::Deck()
{

}
Deck::~Deck()
{

}
