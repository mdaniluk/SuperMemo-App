#ifndef QUESTIONCARD_H
#define QUESTIONCARD_H

#include <QObject>
#include <QDebug>
#include <list>
#include <vector>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/gregorian/greg_serialize.hpp>
#include <boost/serialization/map.hpp>
#include <boost/serialization/is_bitwise_serializable.hpp>
#include <boost/serialization/nvp.hpp>
using std::string;
using boost::serialization::make_nvp;
typedef std::vector<std::pair<string, string>> CloseAnswer; 

/**
 * Class which represents logical structure of question, consists all elements of question. Enables setting 
 * next date of showing each question.
 * @author Piotr
 */

class QuestionCard 
{


public:
	QuestionCard (){};
	QuestionCard( const std::string question,  const std::string answer, const int idQuestion , const bool questionType);
	QuestionCard( const std::string question,  CloseAnswer closeanswer, const int idQuestion, const bool questionType);
	boost::gregorian::date dateOfNextQuestion(int mark );
	bool getQuestionType() {return questionType_;}
	int getIdQuestion() {return idQuestion_;}
	string getAnswerOpen() {return answerOpen_;}
	string getQuestion() {return question_;}
	CloseAnswer getcloseAnswer() {return closeAnswer_;}
	~QuestionCard();

private:
	friend class boost::serialization::access;
	template<class Archive>
    void serialize(Archive & ar, const unsigned int version){
		ar & BOOST_SERIALIZATION_NVP(questionType_);
		ar & BOOST_SERIALIZATION_NVP(idQuestion_);
		ar & BOOST_SERIALIZATION_NVP(answerOpen_);
		ar & BOOST_SERIALIZATION_NVP(closeAnswer_);
		ar & BOOST_SERIALIZATION_NVP(question_);
		ar & BOOST_SERIALIZATION_NVP(how_many_);
		ar & BOOST_SERIALIZATION_NVP(eFactor_);
		ar & BOOST_SERIALIZATION_NVP(interval_);
		ar & BOOST_SERIALIZATION_NVP(now);

    }
	// Question type True when open, False when close
	bool questionType_;
	// which question
	int idQuestion_;
	// open answer
	string answerOpen_;
	// question
	string question_;
	//vector of pairs (pair consists of 2 strings, answer to question and True or False)
	CloseAnswer closeAnswer_;
	//how many times question was answered by user
	int how_many_;
	// question difficulty
	double eFactor_;
	// interval between appearing question again in program (in days)
	double interval_;
	// date of next revision;
	boost::gregorian::date now;

};

#endif // QUESTIONCARD_H
