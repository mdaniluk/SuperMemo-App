#include "model.h"
#include<qdebug.h>
Model::Model()
{
	currentCourse = new Course();
	start = new Start();
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
void Model::setChooseCourse(){
	start->chooseCourse();
}
