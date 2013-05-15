#include "createnewtest.h"

CreateNewTest::CreateNewTest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	number = 1;
	questions = new QString[20];
}

CreateNewTest::~CreateNewTest()
{
	delete questions;
}
void CreateNewTest::nextQuestion(){
	questions[number] = ui.questionEdit->toPlainText();
	number++;
	ui.questionNumber->setText(QString::number(number));
	if(questions[number] != nullptr)
		ui.questionEdit->setText(questions[number]);
	else
		ui.questionEdit->setText("");
}
void CreateNewTest::backQuestion(){
	number--;
	if(number > 0){
		ui.questionEdit->setText(questions[number]);
		ui.questionNumber->setText(QString::number(number));
		questions[number] = ui.questionEdit->toPlainText();
	}
	
}