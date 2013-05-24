#include "controller.h"
#include "Exception.h"

Controller::Controller()
	: view_(NULL), model_(new Model){}
Controller::~Controller(){
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
	connect(view_, SIGNAL(showCurrentListOfFiles()), this, SLOT(addListOfFiles() ) );
	connect(view_, SIGNAL(chooseCourse()), this, SLOT(addChooseCourse() ) );
	connect(view_, SIGNAL(closeAnyWindow()), this, SLOT(addCloseAnyWindow() ) );
}

void Controller::addTaskNext(int id, std::string question, std::string answer){
	try{
		model_->setNext(id,question,answer);
		emit goNext(id+1, model_->getCurrentCourse()->getQuestions(id+1), model_->getCurrentCourse()->getAnswers(id+1) );
	}
	catch (myException e){
		emit error(e.returnMessage());
	}
	
}

void Controller::addTaskBack(int id, std::string question, std::string answer){
	try{
		model_->setNext(id,question,answer);
		emit goNext(id-1, model_->getCurrentCourse()->getQuestions(id-1), model_->getCurrentCourse()->getAnswers(id-1) );
	}
	catch (myException e){
		emit error(e.returnMessage());
	}
}
void Controller::addLastTask(int id, std::string question, std::string answer){
	try{
		model_->setNext(id,question,answer);
	}
	catch (myException e){
		emit error(e.returnMessage());
	}
}

void Controller::addSaveCourse(std::string nameOfFile){
	try{
		model_->setSaveCourse(nameOfFile);
		emit closeCreator();
	}
	catch (myException e){
		emit error(e.returnMessage());
	}
}

void Controller::addListOfFiles(){
	try{
		model_->setListOfFiles();
		emit getListOfCourses(model_->getCurrentStart()->getListOfFiles());
	}
	catch (myException e){
		emit error(e.returnMessage());
	}
}

void Controller::addChooseCourse(){
	try{
		model_->setChooseCourse();
		emit closeStartWindow();
	}
	catch (myException e){
		emit error(e.returnMessage());
	}
}
void Controller::addCloseAnyWindow(){
	try{
		emit enabledMainWindow();
	}
	catch (myException e){
		emit error(e.returnMessage());
	}
}