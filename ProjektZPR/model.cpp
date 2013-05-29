#include "model.h"
#include<qdebug.h>
Model::Model()
{
	currentCourse = new Course();
	start = new Start();
	mark = new Mark();
}

Model::~Model()
{

}

void Model::setNext(int id, std::string question, std::string answer){
	currentCourse->setQuestions(id, question);
	currentCourse->setAnswers(id, answer);
	//qDebug() << "jeeeeeeeeeeeeeee";
}

void Model::setSaveCourse(std::string nameOfFile){
	currentCourse->writeToXML(nameOfFile);
}

void Model::setListOfFiles(){
	start->setListOfFiles();
}

void Model::setChooseCourse(std::string course){
	start->chooseCourse(course);
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