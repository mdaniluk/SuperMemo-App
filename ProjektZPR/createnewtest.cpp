#include "createnewtest.h"
#include <QMessageBox>
#include <QtXml\qdom.h>
#include <QtXml\qxml.h>
#include <qdebug.h>
#include <QInputDialog>
#include <qdir.h>
CreateNewTest::CreateNewTest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	number = 1;
	questions = new QString[20];
	answers = new QString[20];
	isNextOrBack = false;
	numberOfQuestions = 0;
}

CreateNewTest::~CreateNewTest()
{
	delete questions;
	delete answers;
}

void CreateNewTest::saveCourse(){
	if(numberOfQuestions == number){
			isNextOrBack = true;
			
			questions[number] = ui.questionEdit->toPlainText();

			if(!ui.open->isHidden() ){
				answers[number] = ui.answerOpenEdit->toPlainText();	
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
				
			}
			
			isNextOrBack = false;
	}

	if( (questions[numberOfQuestions] == "" && answers[numberOfQuestions] != "") || 
			(questions[numberOfQuestions] != "" && answers[numberOfQuestions] == "") ){
				QMessageBox::information(nullptr,"Warning", "You don't write a question or answer to last task","OK");
	}
	else{
		if(questions[numberOfQuestions] == "" && answers[numberOfQuestions] == "")
			numberOfQuestions--;
		QDomDocument document;
		QDomElement superMemo = document.createElement("SuperMemo");
		document.appendChild(superMemo);
		for(int i = 1; i <= numberOfQuestions; i++){
			QDomElement task = document.createElement("Task");
			task.setAttribute("Id", i);
			superMemo.appendChild(task);
	
			QDomElement question = document.createElement("Question");
			question.setAttribute("Id", i);
			task.appendChild(question);

			QDomText questionText = document.createTextNode(questions[i]);
			question.appendChild(questionText);

		
			

			QString ans = answers[i];
			if(ans.startsWith("***") ){
				QDomElement answer = document.createElement("AnswerClose");
				answer.setAttribute("Id", i);
				task.appendChild(answer);

				QString a = ans.section("***",1,1);
				QString b = ans.section("***",2,2);
				QString c = ans.section("***",3,3);
				QString d = ans.section("***",4,4);
				if ( a != ""){
					QDomElement answerA = document.createElement("a");
					answer.appendChild(answerA);
					QDomText answerText = document.createTextNode(a);
					answerA.appendChild(answerText);
				}
				if ( b != ""){
					QDomElement answerB = document.createElement("b");
					answer.appendChild(answerB);
					QDomText answerText = document.createTextNode(b);
					answerB.appendChild(answerText);
				}
				if ( c != ""){
					QDomElement answerC = document.createElement("c");
					answer.appendChild(answerC);
					QDomText answerText = document.createTextNode(c);
					answerC.appendChild(answerText);
				}
				if ( d != ""){
					QDomElement answerD = document.createElement("d");
					answer.appendChild(answerD);
					QDomText answerText = document.createTextNode(d);
					answerD.appendChild(answerText);
				}
			}
			else{
				QDomElement answer = document.createElement("AnswerOpen");
				answer.setAttribute("Id", i);
				task.appendChild(answer);
				QDomText answerText = document.createTextNode(answers[i]);
				answer.appendChild(answerText);
			}
	}
	
	QString nameOfTest = QInputDialog::getText(this, "Information", "Name of your test: ", QLineEdit::Normal);
	QFile file("C:/Users/Michal/Desktop/" + nameOfTest + ".xml");
	if(!file.open(QIODevice::WriteOnly | QIODevice::Text) ){
		qDebug() << "Failed to open file for writting";
	}
	else{
		QTextStream stream(&file);
		stream << document.toString();
		file.close();
		qDebug() << "Finished";
	}
	this->close();
	}
	
}

void CreateNewTest::currentChangedSlot(){
	if( ui.tabs->currentIndex()  == 1 && ui.answerOpenEdit->toPlainText() != "" && isNextOrBack == false){
		ui.tabs->setCurrentIndex(0);
		QMessageBox* msg = new QMessageBox(this->parentWidget());
		msg->setWindowTitle("Warning");
		msg->setText("You can't change type of answer");
		msg->show();	
	}
	else if(ui.tabs->currentIndex()  == 0 && (ui.answerCloseAEdit->toPlainText() != "" || ui.answerCloseBEdit->toPlainText() != "" ||
			ui.answerCloseCEdit->toPlainText() != "" || ui.answerCloseDEdit->toPlainText() != "") && isNextOrBack == false){
		ui.tabs->setCurrentIndex(1);
		QMessageBox* msg = new QMessageBox(this->parentWidget());
		msg->setWindowTitle("Warning");
		msg->setText("You can't change type of answer now");
		msg->show();	
	}
	
}

void CreateNewTest::nextQuestion(){
	if(ui.questionEdit->toPlainText() == "" || 
		(ui.answerOpenEdit->toPlainText() == "" && 
		(ui.answerCloseAEdit->toPlainText()== "" && ui.answerCloseBEdit->toPlainText()== "" && 
		ui.answerCloseCEdit->toPlainText()== "" && ui.answerCloseDEdit->toPlainText()== "" ) ) ){
		QMessageBox::information(nullptr,"Warning", "You should write a question and answer","OK");
	}
	else{
		isNextOrBack = true;
		questions[number] = ui.questionEdit->toPlainText();

		if(!ui.open->isHidden() ){
			answers[number] = ui.answerOpenEdit->toPlainText();	
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
		}

		number++;
		if(answers[number].startsWith("***") ){
			ui.tabs->setCurrentIndex(1); // -close
			ui.answerCloseAEdit->setText(answers[number].section("***",1,1) );
			ui.answerCloseBEdit->setText(answers[number].section("***",2,2) );
			ui.answerCloseCEdit->setText(answers[number].section("***",3,3) );
			ui.answerCloseDEdit->setText(answers[number].section("***",4,4) );
			ui.answerOpenEdit->setText("");
		}
		else{
			ui.tabs->setCurrentIndex(0);
			if(answers[number] != ""){
				ui.answerOpenEdit->setText(answers[number]);
			}
			else
				ui.answerOpenEdit->setText("");

			ui.answerCloseAEdit->setText("");
			ui.answerCloseBEdit->setText("");
			ui.answerCloseCEdit->setText("");
			ui.answerCloseDEdit->setText("");

		}
		
		if(questions[number ] != ""){
			ui.questionEdit->setText(questions[number]);
		}	
		else
			ui.questionEdit->setText("");

		
		ui.questionNumber->setText(QString::number(number));
		isNextOrBack = false;
		if(numberOfQuestions < number)
			numberOfQuestions = number;
	}
	
}
void CreateNewTest::backQuestion(){
	if(number > 1){
		isNextOrBack = true;
		questions[number] = ui.questionEdit->toPlainText();
		
		/*open answer */
		if(!ui.open->isHidden() ){
			answers[number] = ui.answerOpenEdit->toPlainText();
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
		}

		number--;
		if(answers[number].startsWith("***") ){
			ui.tabs->setCurrentIndex(1); // index1 - close
			ui.answerCloseAEdit->setText(answers[number].section("***",1,1) );
			ui.answerCloseBEdit->setText(answers[number].section("***",2,2) );
			ui.answerCloseCEdit->setText(answers[number].section("***",3,3) );
			ui.answerCloseDEdit->setText(answers[number].section("***",4,4) );
			ui.answerOpenEdit->setText("");
		}	
		else{
			ui.tabs->setCurrentIndex(0);
			ui.answerOpenEdit->setText(answers[number]);
			ui.answerCloseAEdit->setText("");
			ui.answerCloseBEdit->setText("");
			ui.answerCloseCEdit->setText("");
			ui.answerCloseDEdit->setText("");
		}

		ui.questionEdit->setText(questions[number]);
		ui.questionNumber->setText(QString::number(number));	
		isNextOrBack = false;
	}
	
}