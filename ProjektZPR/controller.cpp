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
	connect(view_, SIGNAL(testCurrentSignal(int,std::string, std::string)), this, SLOT(testSlot(int,std::string, std::string) ) );
	connect(view_, SIGNAL(saveCurrentCourse()), this, SLOT(addSaveCourse()) );
}

void Controller::activateNext(){

	//model_->setNext();
}

void Controller::addTaskNext(int id, std::string question, std::string answer){
	model_->setNext(id,question,answer);
	emit goNext(id+1, model_->getCurrentCourse()->getQuestions(id+1), model_->getCurrentCourse()->getAnswers(id+1) );
}

void Controller::addTaskBack(int id, std::string question, std::string answer){
	model_->setNext(id,question,answer);
	emit goNext(id-1, model_->getCurrentCourse()->getQuestions(id-1), model_->getCurrentCourse()->getAnswers(id-1) );
}

void Controller::testSlot(int id, std::string question, std::string answer){
	qDebug()<<"Doszlo2";
}

void Controller::addSaveCourse(){
	model_->setSaveCourse();
}