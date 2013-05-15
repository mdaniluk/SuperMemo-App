#include "createnewtest.h"

CreateNewTest::CreateNewTest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	number = 1;
	questions = new QString[20];
	answers = new QString[20];
}

CreateNewTest::~CreateNewTest()
{
	delete questions;
	delete answers;
}

void CreateNewTest::nextQuestion(){
	questions[number] = ui.questionEdit->toPlainText();
	
	if(ui.open->isActiveWindow() ){
		answers[number] = ui.answerOpenEdit->toPlainText();
		if(answers[number + 1] != nullptr){
			ui.answerOpenEdit->setText(answers[number + 1]);
		}	
		else
			ui.answerOpenEdit->setText("");	
	}
	
	if(questions[number + 1] != nullptr){
		ui.questionEdit->setText(questions[number + 1]);
	}	
	else
		ui.questionEdit->setText("");

	number++;
	ui.questionNumber->setText(QString::number(number));
}
void CreateNewTest::backQuestion(){
	
	if(number > 1){
		number--;
		questions[number+1] = ui.questionEdit->toPlainText();
		ui.questionEdit->setText(questions[number]);
		ui.questionNumber->setText(QString::number(number));
		

		/*open answer */
		if(ui.open->isActiveWindow() ){
			answers[number + 1] = ui.answerOpenEdit->toPlainText();
			ui.answerOpenEdit->setText(answers[number]);
			
		}

		
	}
	
}