#include "model.h"
#include<qdebug.h>

Model::Model()
{
	currentCourse = new Course();
	start = new Start();

	mark = new Mark();

	deck = new Deck();

}

Model::~Model()
{
	delete start;
	delete mark;
	delete deck;
}

void Model::setChooseCourseContinue(std::string name){
	start-> continueClicked(name);
}
void Model::endCourseAction(std::vector<int> answersJudged, std::string courseName){

	start->setNextDateForEach(answersJudged, courseName);
}
void Model::setNext(int id, std::string question, std::string answer){
	currentCourse->setQuestions(id, question);
	currentCourse->setAnswers(id, answer);
}

void Model::setSaveCourse(std::string nameOfFile){
	currentCourse->writeToXML(nameOfFile);
}

void Model::setListOfFiles(){
	start->setListOfFiles();
}

void Model::setChooseCourse(std::string course, bool flag){
	start->chooseCourse(course, flag);
}

void Model::deleteChooseCourse(std::string course){
	start->deleteCourse(course);
}

void Model::computeCloseMark(int type , vector<bool> user, vector<bool> correct ){
	mark->computeForClose(type, user, correct);
}

void Model::computeOpenMark(int type, std::string user, std::string correct ){
	mark->computeForOpen(type, user, correct);
}