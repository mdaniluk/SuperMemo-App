#include "startmenu.h"
#include <qmessagebox.h>
StartMenu::StartMenu(Controller *controller, View *parent)
	: QDialog(parent), myView_(parent), myController_(controller)
{	
	setAttribute(Qt::WA_DeleteOnClose, true);
	setupUi(this);

	qRegisterMetaType<std::vector<std::string>>("std::vector<std::string>");

	connect(this,SIGNAL(showListOfFiles()), myView_, SIGNAL(showCurrentListOfFiles()) );
	connect(this,SIGNAL(choose(std::string)), myView_, SIGNAL(chooseCourse(std::string)) );
	connect(this,SIGNAL(closeStart()), myView_, SIGNAL(closeAnyWindow()) );
	connect(this,SIGNAL(deleteCourse(std::string)),myView_, SIGNAL(deleteCourse(std::string) ));

	connect(myController_,SIGNAL(getListOfCourses(std::vector<std::string>) ), this, SLOT(setListOfCourses(std::vector<std::string>)) );
	connect(myController_,SIGNAL(closeStartWindow() ), this, SLOT(closeWindow()) );
	emit showListOfFiles();
	show();

}

StartMenu::~StartMenu()
{

}

void StartMenu::setListOfCourses(std::vector<std::string> listOfFiles){
	coursesList->clear();
	for(int i = 0; i < listOfFiles.size(); i++){
		std::string course = listOfFiles[i].substr(0,listOfFiles[i].length() - 4);
		coursesList->addItem(QString::fromStdString(course) );
	}
		
}

void StartMenu::on_choose_clicked(){
	emit choose(coursesList->currentItem()->text().toStdString() );
}

void StartMenu::on_deleteButton_clicked(){
	QMessageBox* msg = new QMessageBox(this->parentWidget());
	msg->setWindowTitle("Warning");
	msg->setText("Are you sure to delete this course?");
	msg->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
	msg->show();	
	int reply = msg->exec();
	switch (reply) {
		case QMessageBox::Yes:
			emit deleteCourse(coursesList->currentItem()->text().toStdString() );
	}
	
}

void StartMenu::closeWindow(){
	QDialog::close();
}

void StartMenu::closeEvent(QCloseEvent *event){
	emit closeStart();
}

