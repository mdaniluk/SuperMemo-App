
#ifdef __unix__
#define BOOST_TEST_DYN_LINK
#endif

#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE TestySupermemo


#include <boost/test/unit_test.hpp>

#include "Model.h"
#include "Start.h"
using namespace boost::unit_test;
 
BOOST_AUTO_TEST_CASE( test_course){
	Course *course = new Course();
	course->setQuestions(1,"question1");
	course->setAnswers(1,"answer1");

	BOOST_CHECK(course->getAnswers().size() == 2);
	BOOST_CHECK(course->getQuestions().size() == 1);
}

BOOST_AUTO_TEST_CASE( test_model){
	Model model;
	Start *start = model.getCurrentStart();
	Course *course = model.getCurrentCourse();


}
BOOST_AUTO_TEST_CASE( test_questionCard )
{
	string question("question");
	string answer ("answer");
	int idQuestion(3);
	bool questionType(true);

	QuestionCard q(question, answer,idQuestion,questionType);

	BOOST_CHECK( q.getQuestionType() == true);
	BOOST_CHECK( q.getIdQuestion() == idQuestion);
	BOOST_CHECK( q.getQuestion() == question );
	BOOST_CHECK( q.getAnswerOpen() == answer );

}
BOOST_AUTO_TEST_CASE( test_Deck )
{
	std::ifstream file("Resources/ogolne.xml");
	if (!file.is_open()) {
		throw LackFile("");}

	Deck d(QString::fromStdString("Resources/ogolne.xml"));

	BOOST_CHECK (!d.getQuestionCardVector().empty());
	BOOST_CHECK (d.getQuestionCardVector().at(0)->getAnswerOpen()=="Nil");
	BOOST_CHECK (d.getQuestionCardVector().at(1)->getAnswerOpen()=="Mount Everest");
	BOOST_CHECK (d.getQuestionCardVector().at(0)->idQuestion_==1);
	BOOST_CHECK (d.getQuestionCardVector().at(2)->questionType_==0);


}

BOOST_AUTO_TEST_CASE( test_Start)
{
	Start *s = new Start();
	Deck *d= new Deck();

	s->loadFromFileCurrentState(*d,"ogolne");
	boost::gregorian::date now = boost::gregorian::day_clock::local_day();
	BOOST_CHECK(d->getQuestionCardVector().at(0)->getNextDate()>=now);
	BOOST_CHECK(d->getQuestionCardVector().at(0)->closeAnswer_.empty());
	BOOST_CHECK(d->getQuestionCardVector().at(5)->how_many_>=0);
	BOOST_CHECK(d->getQuestionCardVector().at(5)->interval_>=1);
	BOOST_CHECK(d->getQuestionCardVector().at(4)->eFactor_>=0.5);
	BOOST_CHECK(d->getQuestionCardVector().at(2)->questionType_==0);
	BOOST_CHECK(d->getQuestionCardVector().at(6)->getQuestion()!="empty");


}