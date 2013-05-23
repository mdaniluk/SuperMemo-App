#include "createtest.h"

#include <boost\regex.hpp>
#include <qmessagebox.h>
#include <QInputDialog>
CreateTest::CreateTest(Controller *controller, View *parent)
	: QDialog(parent), myView_(parent), myController_(controller)
{
	setAttribute(Qt::WA_DeleteOnClose, true);
	setupUi(this);
	isNextOrBack_ = false;
	numberOfQuestions_ = 0;
	number_ = 1;
	connect(this,SIGNAL(setTaskNext(int, std::string, std::string ) ),myView_,SIGNAL(setCurrentTaskNext(int, std::string, std::string)) );
	connect(this,SIGNAL(setTaskBack(int, std::string, std::string ) ),myView_,SIGNAL(setCurrentTaskBack(int, std::string, std::string))  );
	connect(this,SIGNAL(setLastTask(int, std::string, std::string ) ),myView_,SIGNAL(setLastTask(int, std::string, std::string)) );
	connect(this,SIGNAL(saveCourse(std::string)),myView_,SIGNAL(saveCurrentCourse(std::string))  );
	connect(this,SIGNAL(closeCreator()), myView_, SIGNAL(closeAnyWindow()) );

	connect(myController_,SIGNAL(goNext(int,std::string, std::string) ), this, SLOT(refreshTask(int,std::string, std::string) ) );
	connect(myController_,SIGNAL(closeCreator() ), this, SLOT(closeWindow()) );

	connect(tabs, SIGNAL(currentChanged(int)), this , SLOT(currentChangedSlot(int)) );
	show();

}

CreateTest::~CreateTest()
{

}

void CreateTest::getTask(){
	question_ = questionEdit->toPlainText().toStdString();
	if(tabs->currentIndex() == 0){  //open
		answer_ = answerOpenEdit->toPlainText().toStdString();
	}
	// @@@odpA@###flaga@@@%%%odpB%###flaga%%%!!!odpC!###flaga!!!&&&odpD&###flaga&&&
	else if(tabs->currentIndex() == 1){ //close
		answer_ ="";
		if(answerCloseAEdit->toPlainText() != ""){
			answer_ += "@@@" + answerCloseAEdit->toPlainText().toStdString();
			answer_ += "@###" + aValue->currentText().toStdString() + "@@@";
		}
		if(answerCloseBEdit->toPlainText() != ""){
			answer_ += "%%%" + answerCloseBEdit->toPlainText().toStdString();
			answer_ += "%###" + bValue->currentText().toStdString() + "%%%";
		}
		if(answerCloseCEdit->toPlainText() != ""){
			answer_ += "!!!" + answerCloseCEdit->toPlainText().toStdString();
			answer_ += "!###" + cValue->currentText().toStdString() + "!!!";
		}
		if(answerCloseDEdit->toPlainText() != ""){
			answer_ += "&&&" + answerCloseDEdit->toPlainText().toStdString();
			answer_ += "&###" + dValue->currentText().toStdString() + "&&&";
		}
	}
}

void CreateTest::currentChangedSlot(int index){
	if( tabs->currentIndex() == 1 && answerOpenEdit->toPlainText() != "" && isNextOrBack_ == false){
		isNextOrBack_ = true;
		tabs->setCurrentIndex(0);
		QMessageBox* msg = new QMessageBox(this->parentWidget());
		msg->setWindowTitle("Warning");
		msg->setText("You can't change type of answer");
		msg->show();	
		isNextOrBack_ = false;
	}
	else if(tabs->currentIndex() == 0 && (answerCloseAEdit->toPlainText() != "" || answerCloseBEdit->toPlainText() != "" ||
			answerCloseCEdit->toPlainText() != "" || answerCloseDEdit->toPlainText() != "") && isNextOrBack_ == false){
		isNextOrBack_ = true;
		tabs->setCurrentIndex(1);
		QMessageBox* msg = new QMessageBox(this->parentWidget());
		msg->setWindowTitle("Warning");
		msg->setText("You can't change type of answer now");
		msg->show();	
		isNextOrBack_ = false;
	}
	
}

void CreateTest::on_next_clicked(){
	if(questionEdit->toPlainText() == "" || 
		(answerOpenEdit->toPlainText() == "" && 
		(answerCloseAEdit->toPlainText()== "" && answerCloseBEdit->toPlainText()== "" && 
		answerCloseCEdit->toPlainText()== "" && answerCloseDEdit->toPlainText()== "" ) ) ){
		QMessageBox::information(nullptr,"Warning", "You should write a question and answer","OK");
	}
	else{
		isNextOrBack_ = true;
		getTask();
		emit setTaskNext(number_,question_, answer_);
		number_++;
		questionNumber->setText(QString::number(number_) );
		isNextOrBack_ = false;
		if(numberOfQuestions_ < number_)
			numberOfQuestions_ = number_;
	}

}

void CreateTest::on_back_clicked(){
	if(number_ > 1){
		isNextOrBack_ = true;
		getTask();
		emit setTaskBack(number_, question_, answer_ );
		number_--;
		questionNumber->setText(QString::number(number_) );
		isNextOrBack_ = false;	
	}
}

void CreateTest::refreshTask(int number,std::string question, std::string answer){
	isNextOrBack_ = true;
	questionEdit->setText(QString::fromStdString(question) );
	
	boost::regex matcherA("\\@@@(.*?)\\@###");
	boost::smatch result;
	boost::regex matcherValueA("\\@###(.*?)\\@@@");
	boost::smatch resultValue;

	boost::regex matcherB("\\%%%(.*?)\\%###");
	boost::regex matcherValueB("\\%###(.*?)\\%%%");

	boost::regex matcherC("\\!!!(.*?)\\!###");
	boost::regex matcherValueC("\\!###(.*?)\\!!!");

	boost::regex matcherD("\\&&&(.*?)\\&###");
	boost::regex matcherValueD("\\&###(.*?)\\&&&");

	bool isClose = false;
	if(boost::regex_search(answer, result, matcherA) ){
		answerCloseAEdit->setText(QString::fromStdString(result[1]));
		if(boost::regex_search(answer, resultValue, matcherValueA) ){
			if(resultValue[1] == "True")
				aValue->setCurrentText("True");
			else if(resultValue[1] == "False")
				aValue->setCurrentText("False");
		}
		isClose = true;
	}
	else
		answerCloseAEdit->setText("");

	if(boost::regex_search(answer, result, matcherB) ){
		answerCloseBEdit->setText(QString::fromStdString(result[1]));
		if(boost::regex_search(answer, resultValue, matcherValueB) ){
			string str = resultValue[1];
			if(resultValue[1] == "True")
				bValue->setCurrentText("True");
			else if(resultValue[1] == "False")
				bValue->setCurrentText("False");
		}
		isClose = true;
	}
	else
		answerCloseBEdit->setText("");
	
	if(boost::regex_search(answer, result, matcherC) ){
		answerCloseCEdit->setText(QString::fromStdString(result[1]));
		if(boost::regex_search(answer, resultValue, matcherValueC) ){
			if(resultValue[1] == "True")
				cValue->setCurrentText("True");
			else if(resultValue[1] == "False")
				cValue->setCurrentText("False");
		}
		isClose = true;
	}
	else
		answerCloseCEdit->setText("");

	if(boost::regex_search(answer, result, matcherD) ){
		answerCloseDEdit->setText(QString::fromStdString(result[1]));
		if(boost::regex_search(answer, resultValue, matcherValueD) ){
			if(resultValue[1] == "True")
				dValue->setCurrentText("True");
			else if(resultValue[1] == "False")
				dValue->setCurrentText("False");
		}
		isClose = true;
	}
	else
		answerCloseDEdit->setText("");

	if(answer == ""){
		answerOpenEdit->setText(QString::fromStdString(answer) );
		answerCloseAEdit->setText("");
		answerCloseBEdit->setText("");
		answerCloseCEdit->setText("");
		answerCloseDEdit->setText("");
		aValue->setCurrentText("True");
		bValue->setCurrentText("True");
		cValue->setCurrentText("True");
		dValue->setCurrentText("True");
	}

	if(isClose == true){
		tabs->setCurrentIndex(1);
	}
	else{
		tabs->setCurrentIndex(0);
		answerOpenEdit->setText(QString::fromStdString(answer) );
	}

	isClose = false;
	isNextOrBack_ = false;
}

void CreateTest::on_save_clicked(){
	if(numberOfQuestions_ == number_){
		isNextOrBack_ = true;
		getTask();
		emit setLastTask(number_, question_, answer_);			
	}

	QString nameOfTest = QInputDialog::getText(this, "Information", "Name of your test: ", QLineEdit::Normal);
	emit saveCourse(nameOfTest.toStdString());
	isNextOrBack_ = false;
}

void CreateTest::closeWindow(){
	QDialog::close();
}

void CreateTest::closeEvent(QCloseEvent *event){
	emit closeCreator();
}