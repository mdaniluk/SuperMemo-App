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
void View::on_next_clicked(){

	//myView->actionNext->trigger();
	//emit goNext();
	label->setText("DZIALA");
}