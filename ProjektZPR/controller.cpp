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

	connect(view_, SIGNAL(setCurrentTask(int, std::string, std::string)), this, SLOT(addTask(int, std::string, std::string) ) );
	connect(view_, SIGNAL(testCurrentSignal(int,std::string, std::string)), this, SLOT(testSlot(int,std::string, std::string) ) );
}

void Controller::addTask(int id, std::string question, std::string answer){
	model_->setNext(id,question,answer);
}
void Controller::testSlot(int id, std::string question, std::string answer){
	qDebug()<<"Doszlo2";
}