#include "view.h"

View::View(Controller* controller, QWidget *parent): myController(controller), QMainWindow(parent){
	setupUi(this);
}
View::~View()
{

}

void View::createNewTest(){
}

void View::showYou(){
	this->show();
}