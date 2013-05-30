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
	qRegisterMetaType<std::vector<int>>("std::vector<int>");
	

	connect(view_, SIGNAL(setCurrentTaskNext(int, std::string, std::string)), this, SLOT(addTaskNext(int, std::string, std::string) ) );
	connect(view_, SIGNAL(setCurrentTaskBack(int, std::string, std::string)), this, SLOT(addTaskBack(int, std::string, std::string) ) );
	connect(view_, SIGNAL(setLastTask(int, std::string, std::string)), this, SLOT(addLastTask(int, std::string, std::string) ) );
	connect(view_, SIGNAL(saveCurrentCourse(std::string)), this, SLOT(addSaveCourse(std::string)) );
	connect(view_, SIGNAL(showCurrentListOfFiles()), this, SLOT(addListOfFiles() ) );
	connect(view_, SIGNAL(chooseCourse(std::string)), this, SLOT(addChooseCourse(std::string) ) );
	connect(view_, SIGNAL(deleteCourse(std::string)), this, SLOT(deleteChooseCourse(std::string) ) );
	connect(view_, SIGNAL(closeAnyWindow()), this, SLOT(addCloseAnyWindow() ) );
	connect(view_, SIGNAL(endCourse(vector<int>)), this, SLOT(endCourseJudge(vector<int>) ) );

}

void Controller::endCourseJudge(std::vector<int> userJudges){
	try{
		qDebug()<<"END Controler";
		model_->endCourseAction(userJudges);
		}
	catch (myException e){
		emit error(e.returnMessage());
	}
	
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

void Controller::addChooseCourse(std::string course){
	try{
		model_->setChooseCourse(course);
		emit closeStartWindow();
		emit emitQuestionCardList(model_->getCurrentStart()->getDeck()->getQuestionCardVector());
	}
	catch (myException e){
		emit error(e.returnMessage());
	}
}

void Controller::deleteChooseCourse(std::string course){
	try{
		model_->deleteChooseCourse(course);
		emit getListOfCourses(model_->getCurrentStart()->getListOfFiles());
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