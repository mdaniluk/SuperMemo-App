#include "view.h"
#include "createtest.h"
View::View(Controller* controller, QWidget *parent): myController_(controller), QMainWindow(parent){
	setupUi(this);
}
View::~View()
{

}

//void View::createNewTest(){
//}

void View::showYou(){
	this->show();
}
void View::on_next_clicked(){

	//myView->actionNext->trigger();
	//emit goNext();
	//label->setText("DZIALA");
}

void View::on_actionNew_Course_triggered(){
	//label_2->setText("DZIALA");
	CreateTest *createTest = new CreateTest(myController_,this);
}