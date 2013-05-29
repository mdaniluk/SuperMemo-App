#include "view.h"
#include "createtest.h"
#include "startmenu.h"
#include <qmessagebox.h>
#include "ui_projektzpr.h"
typedef std::vector<std::pair<string, string>> CloseAnswer; //wektor (odpowiedz + TRUE/FALSE) dla ka¿dego z pytan

View::View(Controller* controller, QWidget *parent): myController_(controller), QMainWindow(parent){
	setupUi(this);
	qRegisterMetaType<vector<PQcard>>("vector<PQcard>");
	connect(myController_, SIGNAL(enabledMainWindow()), this, SLOT(enabledMainWin() ) );
	connect(myController_, SIGNAL(error(std::string)), this, SLOT(showError(std::string)) );
	connect(myController_, SIGNAL( emitQuestionCardList(vector<PQcard>)), this, SLOT(showQuestionCardList(vector<PQcard>)) );
	connect(this, SIGNAL(chooseCourse(std::string)), this, SLOT(on_beginChoose()) );

	connect( verticalSlider, SIGNAL(valueChanged(int)),this, SLOT(changeValueOfSlider(int)) );

	onBeginHide();
}

View::~View()
{

}

void View::showQuestionCardList(vector<PQcard> vectorPQcard)
{	
	currentTask_ = 1;
	
	taskVector_ = vectorPQcard;
	numberOfAllTasks_ = taskVector_.size();
	showCurrentTask();

}
void View::on_beginChoose(){
	nextButton->setDisabled(true);
	backButton->setDisabled(true);
	progressBar->setValue(0);
	progressBar->show();
	answerButton->show();
	judgeButton->show();
	endButton->show();
	trudne->show();
	latwe->show();
	verticalSlider->show();

	labelWelcome->hide();
	labelAuthors->hide();
	
	nextButton->show();
	backButton->show();
	prepareToOpen();

}
void View::showYou(){
	this->show();
}

void View::showError(std::string message){
	QMessageBox::warning(this, "Warning! ",QString::fromStdString(message));
}

void View::on_actionStart_triggered(){
	StartMenu *startmenu= new StartMenu(myController_,this);
	this->setDisabled(true);
	startmenu->setEnabled(true);
}
void View::on_actionNew_Course_triggered(){
	CreateTest *createTest = new CreateTest(myController_,this);
	this->setDisabled(true);
	createTest->setEnabled(true);
}

void View::enabledMainWin(){
	this->setEnabled(true);
}

void View::onBeginHide(){
	progressBar->hide();
	answerButton->hide();
	judgeButton->hide();
	endButton->hide();
	trudne->hide();
	latwe->hide();
	verticalSlider->hide();
	verticalSlider->setMaximum(5);
	labelWelcome->show();
	labelAuthors->show();
	answerOpenEdit->hide();
	nextButton->hide();
	backButton->hide();
	prepareToOpen();
}

void View::prepareToOpen(){
	aLabel->hide();
	bLabel->hide();
	cLabel->hide();
	dLabel->hide();
	answerEditCloseA->hide();
	answerEditCloseB->hide();
	answerEditCloseC->hide();
	answerEditCloseD->hide();
	checkBoxA->hide();
	checkBoxB->hide();
	checkBoxC->hide();
	checkBoxD->hide();
	correctAnswer->hide();
}

void View::showCurrentTask(){

	answerEditCloseA->setStyleSheet("QLabel {}");
	answerEditCloseB->setStyleSheet("QLabel {}");
	answerEditCloseC->setStyleSheet("QLabel {}");
	answerEditCloseD->setStyleSheet("QLabel {}");
	correctAnswer->hide();
	questiocard_= taskVector_.at(currentTask_-1);
	question->setText(QString::fromStdString(questiocard_->getQuestion()));

	if(judgeVector_.size() >= currentTask_)
		verticalSlider->setValue(judgeVector_.at(currentTask_-1) );
	else
		verticalSlider->setValue(5);

	if(questiocard_->getQuestionType() == true){ //open answer
		currentTaskType_ = 1 ;
		answerOpenEdit->show();
		prepareToOpen();
	}
	else{
		currentTaskType_ = 0;
		answerOpenEdit->hide();

		CloseAnswer closeAnswer = questiocard_->getcloseAnswer();
		if(closeAnswer.size() > 0){
			answerEditCloseA->setText(QString::fromStdString(closeAnswer.at(0).first) );
			aLabel->show();
			answerEditCloseA->show();
			checkBoxA->show();
			if(closeAnswer.size() > 1 && closeAnswer.at(1).first != ""){
				answerEditCloseB->setText(QString::fromStdString(closeAnswer.at(1).first) );
				bLabel->show();
				answerEditCloseB->show();
				checkBoxB->show();

			}
				
			if(closeAnswer.size() > 2 && closeAnswer.at(2).first != ""){
				answerEditCloseC->setText(QString::fromStdString(closeAnswer.at(2).first) );
				cLabel->show();
				answerEditCloseC->show();
				checkBoxC->show();
			}
			if(closeAnswer.size() > 3 && closeAnswer.at(3).first != ""){
				answerEditCloseD->setText(QString::fromStdString(closeAnswer.at(3).first) );
				dLabel->show();
				answerEditCloseD->show();
				checkBoxD->show();
			}
		}
		


	}
}
void View::on_nextButton_clicked(){
	
	if(currentTask_ < taskVector_.size() ){
		currentTask_++;
		showCurrentTask();
		//progressBar->setValue( ( ((double)(currentTask_-1)/(double)numberOfAllTasks_) )*100);
		if(judgeVector_.size() < currentTask_){
			nextButton->setDisabled(true);
			backButton->setDisabled(true);

		}
	}
	
}

void View::on_backButton_clicked(){
	
	if(currentTask_ > 1 ){
		currentTask_--;
		showCurrentTask();
		//progressBar->setValue( ( ((double)(currentTask_-1)/(double)numberOfAllTasks_) )*100);
	}
	
}

void View::on_answerButton_clicked(){
	if(currentTaskType_ == 0){
		CloseAnswer closeAnswer = questiocard_->getcloseAnswer();
		if(closeAnswer.size() > 0){
			if(closeAnswer.at(0).second == "True")
				answerEditCloseA->setStyleSheet("QLabel { background-color : green; color : black; }");
			else if(closeAnswer.at(0).second == "False")
				answerEditCloseA->setStyleSheet("QLabel { background-color : red; color : black; }");

		}
		if(closeAnswer.size() > 1){
			if(closeAnswer.at(1).second == "True")
				answerEditCloseB->setStyleSheet("QLabel { background-color : green; color : black; }");
			else if(closeAnswer.at(1).second == "False")
				answerEditCloseB->setStyleSheet("QLabel { background-color : red; color : black; }");

		}
		
		if(closeAnswer.size() > 2){
			if(closeAnswer.at(2).second == "True")
				answerEditCloseC->setStyleSheet("QLabel { background-color : green; color : black; }");
			else if(closeAnswer.at(2).second == "False")
				answerEditCloseC->setStyleSheet("QLabel { background-color : red; color : black; }");
		}
		
		if(closeAnswer.size() > 3){
			if(closeAnswer.at(3).second == "True")
				answerEditCloseD->setStyleSheet("QLabel { background-color : green; color : black; }");
			else if(closeAnswer.at(3).second == "False")
				answerEditCloseD->setStyleSheet("QLabel { background-color : red; color : black; }");
		}

	}
	else if(currentTaskType_ == 1){
		correctAnswer->setText(QString::fromStdString("Correct Answer: " + questiocard_->getAnswerOpen() ) );
		correctAnswer->setStyleSheet("QLabel { background-color : green; color : black; }");
		correctAnswer->show();

	}
}

void View::changeValueOfSlider(int value){
	valueJudge->setText(QString::number(value));
}
void View::on_judgeButton_clicked(){

	nextButton->setEnabled(true);
	backButton->setEnabled(true);
	int valueProgressBar =  ( ((double)(currentTask_)/(double)numberOfAllTasks_) )*100;
	if(valueProgressBar > progressBar->value() )
		progressBar->setValue(valueProgressBar);

	if(currentTask_> judgeVector_.size() )
		judgeVector_.push_back(verticalSlider->value());
	else
		judgeVector_.at(currentTask_ - 1) = verticalSlider->value();
}

void View::on_endButton_clicked(){
	QMessageBox* msg = new QMessageBox(this->parentWidget());
	msg->setWindowTitle("Warning");
	msg->setText("Are you sure to end this course?");
	msg->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
	msg->show();	
	int reply = msg->exec();
	switch (reply) {
		case QMessageBox::Yes:
			emit endCourse(judgeVector_);
	}
}