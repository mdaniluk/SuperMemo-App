#include "controller.h"

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
	connect(view_, SIGNAL(askedNext()), this, SLOT(activateNext()));
}
void Controller::activateNext(){

	model_->setNext();
}