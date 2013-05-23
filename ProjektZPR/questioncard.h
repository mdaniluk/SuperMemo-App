#ifndef QUESTIONCARD_H
#define QUESTIONCARD_H

#include <QObject>
#include <list>
using std::string;
typedef std::list<std::pair<string, string>> CloseAnswer; //wektor (odpowiedz + TRUE/FALSE) dla ka¿dego z pytan
class QuestionCard 
{


public:
	QuestionCard (){};
	QuestionCard( const std::string question,  const std::string answer, const int idQuestion , const bool questionType);
	QuestionCard( const std::string question,  CloseAnswer closeanswer, const int idQuestion, const bool questionType);
	~QuestionCard();

private:
	
	bool questionType_;
	int idQuestion_;
	string answer_;
	string question_;
	CloseAnswer closeAnswer_;

};

#endif // QUESTIONCARD_H
