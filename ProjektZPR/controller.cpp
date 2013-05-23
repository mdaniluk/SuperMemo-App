#include "controller.h"
#include <QDebug>

Controller::Controller()
	: view_(NULL), model_(new Model)
{

}

Controller::~Controller()
{

}

void Controller::connectView(View * view){

	if(view_){
		view_->disconnect();
	}
	view_=view;

	qRegisterMetaType<std::string>("std::string");

	connect(view_, SIGNAL(setCurrentTaskNext(int, std::string, std::string)), this, SLOT(addTaskNext(int, std::string, std::string) ) );
	connect(view_, SIGNAL(setCurrentTaskBack(int, std::string, std::string)), this, SLOT(addTaskBack(int, std::string, std::string) ) );
	connect(view_, SIGNAL(setLastTask(int, std::string, std::string)), this, SLOT(addLastTask(int, std::string, std::string) ) );
	connect(view_, SIGNAL(saveCurrentCourse(std::string)), this, SLOT(addSaveCourse(std::string)) );
}

void Controller::addTaskNext(int id, std::string question, std::string answer){
	model_->setNext(id,question,answer);
	emit goNext(id+1, model_->getCurrentCourse()->getQuestions(id+1), model_->getCurrentCourse()->getAnswers(id+1) );
}

void Controller::addTaskBack(int id, std::string question, std::string answer){
	model_->setNext(id,question,answer);
	emit goNext(id-1, model_->getCurrentCourse()->getQuestions(id-1), model_->getCurrentCourse()->getAnswers(id-1) );
}
void Controller::addLastTask(int id, std::string question, std::string answer){
	model_->setNext(id,question,answer);
}

void Controller::addSaveCourse(std::string nameOfFile){
	model_->setSaveCourse(nameOfFile);
	emit closeCreator();
}