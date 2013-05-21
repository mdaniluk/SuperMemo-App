#include "createtest.h"

CreateTest::CreateTest(Controller *controller, View *parent)
	: QDialog(parent), myView_(parent), myController_(controller)
{
	setupUi(this);
	number_ = 0;
	connect(this,SIGNAL(setTask(int, std::string, std::string ) ),myView_,SIGNAL(setCurrentTask(int, std::string, std::string)) );
	connect(this,SIGNAL(testSignal(int,std::string,std::string) ),myView_,SIGNAL(testCurrentSignal(int,std::string, std::string)) );
	show();

}

CreateTest::~CreateTest()
{

}
void CreateTest::on_next_clicked(){
	number_++;
	emit setTask(number_,questionEdit->toPlainText().toStdString(), answerOpenEdit->toPlainText().toStdString() );
}
void CreateTest::on_back_clicked(){
	emit testSignal(number_,questionEdit->toPlainText().toStdString(), answerOpenEdit->toPlainText().toStdString() );
}
	