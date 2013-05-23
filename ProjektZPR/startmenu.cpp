#include "startmenu.h"
StartMenu::StartMenu(Controller *controller, View *parent)
	: QDialog(parent), myView_(parent), myController_(controller)
{	
	setAttribute(Qt::WA_DeleteOnClose, true);
	setupUi(this);
	Qt::WindowStaysOnTopHint;

	qRegisterMetaType<std::vector<std::string>>("std::vector<std::string>");

	connect(this,SIGNAL(showListOfFiles()), myView_, SIGNAL(showCurrentListOfFiles()) );
	connect(this,SIGNAL(choose()), myView_, SIGNAL(chooseCourse()) );
	connect(this,SIGNAL(closeStart()), myView_, SIGNAL(closeAnyWindow()) );
	connect(myController_,SIGNAL(getListOfCourses(std::vector<std::string>) ), this, SLOT(setListOfCourses(std::vector<std::string>)) );
	connect(myController_,SIGNAL(closeStartWindow() ), this, SLOT(closeWindow()) );

	emit showListOfFiles();
	show();

}

StartMenu::~StartMenu()
{

}

void StartMenu::setListOfCourses(std::vector<std::string> listOfFiles){
	for(int i = 0; i < listOfFiles.size(); i++){
		std::string course = listOfFiles[i].substr(0,listOfFiles[i].length() - 4);
		coursesList->addItem(QString::fromStdString(course) );
	}
		
}

void StartMenu::on_choose_clicked(){
	emit choose();
}

void StartMenu::closeWindow(){
	QDialog::close();
}

void StartMenu::closeEvent(QCloseEvent *event){
	emit closeStart();
}

