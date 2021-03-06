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

	qRegisterMetaType<vector<bool>>("vector<bool>");
	qRegisterMetaType<vector<int>>("vector<int>");


	qRegisterMetaType<bool>("bool");
	


	connect(view_, SIGNAL(setCurrentTaskNext(int, std::string, std::string)), this, SLOT(addTaskNext(int, std::string, std::string) ) );
	connect(view_, SIGNAL(setCurrentTaskBack(int, std::string, std::string)), this, SLOT(addTaskBack(int, std::string, std::string) ) );
	connect(view_, SIGNAL(setLastTask(int, std::string, std::string)), this, SLOT(addLastTask(int, std::string, std::string) ) );
	connect(view_, SIGNAL(saveCurrentCourse(std::string)), this, SLOT(addSaveCourse(std::string)) );
	connect(view_, SIGNAL(showCurrentListOfFiles()), this, SLOT(addListOfFiles() ) );
	connect(view_, SIGNAL(chooseCourse(std::string, bool)), this, SLOT(addChooseCourse(std::string, bool) ) );

	connect(view_, SIGNAL(chooseContinueCourse(std::string)), this, SLOT(addChooseCourseContinue(std::string) ) );
	connect(view_, SIGNAL(deleteCourse(std::string)), this, SLOT(deleteChooseCourse(std::string) ) );
	connect(view_, SIGNAL(closeAnyWindow()), this, SLOT(addCloseAnyWindow() ) );

	connect(view_, SIGNAL(computeMark(int, std::string, std::string) ), this, SLOT(computeMarkForOpen(int, std::string, std::string) ) );
	connect(view_, SIGNAL(computeMark(int, vector<bool>, vector<bool>) ), this, SLOT(computeMarkForClose(int, vector<bool>, vector<bool>)) );

	connect(view_, SIGNAL(endCourse(vector<int>, std::string)), this, SLOT(endCourseJudge(vector<int>, std::string) ) );


	connect(view_, SIGNAL(endCourse(vector<int>, std::string) ), this, SLOT(addEndCourse(vector<int>, std::string) ) );
}
void Controller::addChooseCourseContinue(std::string name){

	try{
		qDebug()<<"Continue2";
		model_->setChooseCourseContinue(name);
		emit closeStartWindow();
		emit emitQuestionCardListContinue(model_->getCurrentStart()->getDecknew()->getQuestionCardVector(), name);
		}
	catch (myException e){
		emit error(e.returnMessage());
	}

}
void Controller::endCourseJudge(std::vector<int> userJudges, std::string courseName){
	try{
		model_->endCourseAction(userJudges, courseName);
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

void Controller::addChooseCourse(std::string course, bool flag){
	try{
		model_->setChooseCourse(course, flag);
		emit closeStartWindow();
		emit emitQuestionCardList(model_->getCurrentStart()->getDeck()->getQuestionCardVector(),course);
		qDebug()<<"controlerrr";
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

void Controller::computeMarkForOpen(int type, std::string user, std::string correct ){
	qDebug()<<" Controler mark for open";
	model_->computeOpenMark(type,user,correct);
	emit emitSuggestedMark(model_->getCurrentMark()->getValue() );
}

void Controller::computeMarkForClose(int type , vector<bool> user, vector<bool> correct){
	model_->computeCloseMark(type,user,correct);
	emit emitSuggestedMark(model_->getCurrentMark()->getValue() );
}

void Controller::addEndCourse(vector<int> marks, std::string name){
	emit showStats(marks);
}