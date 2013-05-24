#include "view.h"
#include "createtest.h"
#include "startmenu.h"
#include <qmessagebox.h>
View::View(Controller* controller, QWidget *parent): myController_(controller), QMainWindow(parent){
	setupUi(this);
	connect(myController_, SIGNAL(closeCreator() ), this, SLOT(close()) );
	connect(myController_, SIGNAL(enabledMainWindow()), this, SLOT(enabledMainWin() ) );
	connect(myController_, SIGNAL(error(std::string)), this, SLOT(showError(std::string)) );
}
View::~View()
{

}

void View::showYou(){
	this->show();
}

void View::showError(std::string message){
	QMessageBox::warning(this, "Warning! ",QString::fromStdString(message));
}

void View::on_actionStart_triggered(){
	StartMenu *startmenu= new StartMenu(myController_,this);
	this->setDisabled(true);
	startmenu->setEnabled(true);
}
void View::on_actionNew_Course_triggered(){
	CreateTest *createTest = new CreateTest(myController_,this);
	this->setDisabled(true);
	createTest->setEnabled(true);
}

void View::enabledMainWin(){
	this->setEnabled(true);
}