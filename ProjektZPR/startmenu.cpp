#include "startmenu.h"

StartMenu::StartMenu(Controller *controller, View *parent)
	: QDialog(parent), myView_(parent), myController_(controller)
{	
	setAttribute(Qt::WA_DeleteOnClose, true);
	setupUi(this);

	qRegisterMetaType<std::vector<std::string>>("std::vector<std::string>");

	connect(this,SIGNAL(showListOfFiles()), myView_, SIGNAL(showCurrentListOfFiles()) );
	connect(myController_,SIGNAL(getListOfCourses(std::vector<std::string>) ), this, SLOT(setListOfCourses(std::vector<std::string>)) );

	emit showListOfFiles();
	show();
}

StartMenu::~StartMenu()
{

}
void StartMenu::setListOfCourses(std::vector<std::string> listOfFiles){
	for(int i = 0; i < listOfFiles.size(); i++)
		coursesList->addItem(QString::fromStdString(listOfFiles[i]));
}
