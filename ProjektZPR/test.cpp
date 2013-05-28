#ifdef __unix__
#define BOOST_TEST_DYN_LINK
#endif

#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE TestySupermemo


#include <boost/test/unit_test.hpp>

#include "Model.h"
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
