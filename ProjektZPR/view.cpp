#include "view.h"
#include "createtest.h"
#include "startmenu.h"
View::View(Controller* controller, QWidget *parent): myController_(controller), QMainWindow(parent){
	setupUi(this);
	connect(myController_,SIGNAL(closeCreator() ), this, SLOT(close()) );
}
View::~View()
{

}

void View::showYou(){
	this->show();
}

void View::on_actionStart_triggered(){

	StartMenu *startmenu= new StartMenu(myController_,this);
}
void View::on_actionNew_Course_triggered(){
	
	CreateTest *createTest = new CreateTest(myController_,this);
	
}
void View::close(){
	
}