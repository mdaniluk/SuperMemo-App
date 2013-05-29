#include "view.h"
#include "createtest.h"
#include "startmenu.h"
#include <qmessagebox.h>
typedef std::vector<std::pair<string, string>> CloseAnswer; //wektor (odpowiedz + TRUE/FALSE) dla ka�dego z pytan

View::View(Controller* controller, QWidget *parent): myController_(controller), QMainWindow(parent){
	setupUi(this);
	qRegisterMetaType<vector<PQcard>>("vector<PQcard>");
	connect(myController_, SIGNAL(enabledMainWindow()), this, SLOT(enabledMainWin() ) );
	connect(myController_, SIGNAL(error(std::string)), this, SLOT(showError(std::string)) );
	connect(myController_, SIGNAL( emitQuestionCardList(vector<PQcard>)), this, SLOT(showQuestionCardList(vector<PQcard>)) );
	connect(this, SIGNAL(chooseCourse(std::string)), this, SLOT(on_beginChoose()) );

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
	progressBar->show();
	answerButton->show();
	judge_button->show();
	end_button->show();
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
	judge_button->hide();
	end_button->hide();
	trudne->hide();
	latwe->hide();
	verticalSlider->hide();
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
}

void View::showCurrentTask(){


	questiocard_= taskVector_.at(currentTask_-1);
	question->setText(QString::fromStdString(questiocard_->getQuestion()));
	if(questiocard_->getQuestionType() == true){ //open answer
		currentTaskType_ = 1 ;
		answerOpenEdit->show();
		prepareToOpen();
	}
	else{
		currentTaskType_ = 0;
		answerOpenEdit->hide();

		CloseAnswer closeAnswer = questiocard_->getcloseAnswer();
		if(closeAnswer.size() == 4){
			answerEditCloseA->setText(QString::fromStdString(closeAnswer.at(0).first) );
			aLabel->show();
			answerEditCloseA->show();
			checkBoxA->show();
			if(closeAnswer.at(1).first != ""){
				answerEditCloseB->setText(QString::fromStdString(closeAnswer.at(1).first) );
				bLabel->show();
				answerEditCloseB->show();
				checkBoxB->show();

			}
				
			if(closeAnswer.at(2).first != ""){
				answerEditCloseC->setText(QString::fromStdString(closeAnswer.at(2).first) );
				cLabel->show();
				answerEditCloseC->show();
				checkBoxC->show();
			}
			if(closeAnswer.at(3).first != ""){
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
	}
	
}

void View::on_backButton_clicked(){
	
	if(currentTask_ > 1 ){
		currentTask_--;
		showCurrentTask();
	}
	
}

void View::on_answerButton_clicked(){
	if(currentTaskType_ == 0){
		CloseAnswer closeAnswer = questiocard_->getcloseAnswer();

		if(closeAnswer.at(0).second == "True")
			answerEditCloseA->setStyleSheet("QLabel { background-color : green; color : black; }");
		else if(closeAnswer.at(0).second == "False")
			answerEditCloseA->setStyleSheet("QLabel { background-color : red; color : black; }");

		if(closeAnswer.at(1).second == "True")
			answerEditCloseB->setStyleSheet("QLabel { background-color : green; color : black; }");
		else if(closeAnswer.at(1).second == "False")
			answerEditCloseB->setStyleSheet("QLabel { background-color : red; color : black; }");

		if(closeAnswer.at(2).second == "True")
			answerEditCloseC->setStyleSheet("QLabel { background-color : green; color : black; }");
		else if(closeAnswer.at(2).second == "False")
			answerEditCloseC->setStyleSheet("QLabel { background-color : red; color : black; }");
		
		if(closeAnswer.at(3).second == "True")
			answerEditCloseD->setStyleSheet("QLabel { background-color : green; color : black; }");
		else if(closeAnswer.at(3).second == "False")
			answerEditCloseD->setStyleSheet("QLabel { background-color : red; color : black; }");
	}
}