#include "createnewtest.h"
#include <QMessageBox>
#include <assert.h>
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
	if(ui.questionEdit->toPlainText() == "" || 
		(ui.answerOpenEdit->toPlainText() == "" && 
		(ui.answerCloseAEdit->toPlainText()== "" && ui.answerCloseBEdit->toPlainText()== "" && 
		ui.answerCloseCEdit->toPlainText()== "" && ui.answerCloseDEdit->toPlainText()== "" ) ) ){
		QMessageBox::information(nullptr,"Warning", "You should write a question and answer","OK");

	}
	else{
		questions[number] = ui.questionEdit->toPlainText();
		
		if(!ui.open->isHidden() ){
			answers[number] = ui.answerOpenEdit->toPlainText();
		
			if(answers[number + 1] != nullptr){
					ui.answerOpenEdit->setText(answers[number + 1]);
				}
			else
				ui.answerOpenEdit->setText("");
			
		}
		else if(!ui.close->isHidden() ){
			if(ui.answerCloseAEdit->toPlainText() != "")
				answers[number] = "***" + ui.answerCloseAEdit->toPlainText();
			if(ui.answerCloseBEdit->toPlainText() != "")
				answers[number] += "***" + ui.answerCloseBEdit->toPlainText();
			if(ui.answerCloseCEdit->toPlainText() != "")
				answers[number] += "***" + ui.answerCloseCEdit->toPlainText();
			if(ui.answerCloseDEdit->toPlainText() != "")
				answers[number] += "***" + ui.answerCloseDEdit->toPlainText();

			if(answers[number + 1] != nullptr){
				ui.answerCloseAEdit->setText(answers[number + 1].section("***",1,1) );
				ui.answerCloseBEdit->setText(answers[number + 1].section("***",2,2) );
				ui.answerCloseCEdit->setText(answers[number + 1].section("***",3,3) );
				ui.answerCloseDEdit->setText(answers[number + 1].section("***",4,4) );

			}
			else{
				ui.answerCloseAEdit->setText("");
				ui.answerCloseBEdit->setText("");
				ui.answerCloseCEdit->setText("");
				ui.answerCloseDEdit->setText("");
			}
		}

			

		if(questions[number + 1] != nullptr){
			ui.questionEdit->setText(questions[number + 1]);
		}	
		else
			ui.questionEdit->setText("");

		number++;
		ui.questionNumber->setText(QString::number(number));
	}
	
}
void CreateNewTest::backQuestion(){
	if(number > 1){
		number--;
		questions[number+1] = ui.questionEdit->toPlainText();
		ui.questionEdit->setText(questions[number]);
		ui.questionNumber->setText(QString::number(number));
		

		/*open answer */
		if(!ui.open->isHidden() ){
			answers[number + 1] = ui.answerOpenEdit->toPlainText();
			ui.answerOpenEdit->setText(answers[number]);
			
		}
		else if(!ui.close->isHidden() ){
			if(ui.answerCloseAEdit->toPlainText() != "")
				answers[number + 1] = "***" + ui.answerCloseAEdit->toPlainText();
			if(ui.answerCloseBEdit->toPlainText() != "")
				answers[number + 1] += "***" + ui.answerCloseBEdit->toPlainText();
			if(ui.answerCloseCEdit->toPlainText() != "")
				answers[number + 1] += "***" + ui.answerCloseCEdit->toPlainText();
			if(ui.answerCloseDEdit->toPlainText() != "")
				answers[number + 1] += "***" + ui.answerCloseDEdit->toPlainText();

			ui.answerCloseAEdit->setText(answers[number].section("***",1,1) );
			ui.answerCloseBEdit->setText(answers[number].section("***",2,2) );
			ui.answerCloseCEdit->setText(answers[number].section("***",3,3) );
			ui.answerCloseDEdit->setText(answers[number].section("***",4,4) );

		}

		
	}
	
}