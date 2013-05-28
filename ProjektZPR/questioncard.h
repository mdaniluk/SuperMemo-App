#ifndef QUESTIONCARD_H
#define QUESTIONCARD_H

#include <QObject>
#include <list>
#include <vector>
using std::string;
typedef std::vector<std::pair<string, string>> CloseAnswer; //wektor (odpowiedz + TRUE/FALSE) dla ka¿dego z pytan
class QuestionCard 
{


public:
	QuestionCard (){};
	QuestionCard( const std::string question,  const std::string answer, const int idQuestion , const bool questionType);
	QuestionCard( const std::string question,  CloseAnswer closeanswer, const int idQuestion, const bool questionType);
	bool getQuestionType() {return questionType_;}
	int getIdQuestion() {return idQuestion_;}
	string getAnswerOpen() {return answerOpen_;}
	string getQuestion() {return question_;}
	CloseAnswer getcloseAnswer() {return closeAnswer_;}
	~QuestionCard();

private:
	
	bool questionType_;
	int idQuestion_;
	string answerOpen_;
	string question_;
	CloseAnswer closeAnswer_;

};

#endif // QUESTIONCARD_H
