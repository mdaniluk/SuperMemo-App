#include "startmenu.h"
#include <qmessagebox.h>
StartMenu::StartMenu(Controller *controller, View *parent)
	: QDialog(parent), myView_(parent), myController_(controller)
{	
	setAttribute(Qt::WA_DeleteOnClose, true);
	setupUi(this);

	qRegisterMetaType<std::vector<std::string>>("std::vector<std::string>");
	qRegisterMetaType<bool>("bool");
	connect(this,SIGNAL(showListOfFiles()), myView_, SIGNAL(showCurrentListOfFiles()) );
	connect(this,SIGNAL(choose(std::string, bool)), myView_, SIGNAL(chooseCourse(std::string, bool)) );

	connect(this,SIGNAL(chooseContinue(std::string)), myView_, SIGNAL(chooseContinueCourse(std::string)) );
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

void StartMenu::on_continueButton_clicked(){

	std::string tmp=(coursesList->currentItem()->text().toStdString()+ ".txt");
	ifstream file(tmp);
	if (file.good())
	{
		emit chooseContinue(coursesList->currentItem()->text().toStdString() ); }
	else{
		QMessageBox* msg = new QMessageBox(this->parentWidget());
		msg->setWindowTitle("Warning");
		msg->setText("You did not start this course yet !");
		msg->setStandardButtons(QMessageBox::Ok);
		msg->show();	
	}
	
}

void StartMenu::on_choose_clicked(){
	emit choose(coursesList->currentItem()->text().toStdString(), true );
	qDebug()<<"startmenu";
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

