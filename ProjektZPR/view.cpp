#include "view.h"
#include "createtest.h"
#include "statistic.h"
#include "startmenu.h"
#include <qmessagebox.h>
#include "ui_projektzpr.h"

typedef std::vector<std::pair<string, string>> CloseAnswer; //wektor (odpowiedz + TRUE/FALSE) dla ka¿dego z pytan

View::View(Controller* controller, QWidget *parent): myController_(controller), QMainWindow(parent){
	setupUi(this);

	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(QImage("images/tlo.jpg")));
	this->setPalette(palette);
	qRegisterMetaType<vector<PQcard>>("vector<PQcard>");
	qRegisterMetaType<vector<int>>("vector<int>");
	qRegisterMetaType<std::string>("std::string");
	qRegisterMetaType<bool>("bool");

	connect(myController_, SIGNAL(enabledMainWindow()), this, SLOT(enabledMainWin() ) );
	connect(myController_, SIGNAL(error(std::string)), this, SLOT(showError(std::string)) );
	connect(myController_, SIGNAL( emitQuestionCardList(vector<PQcard>, std::string)), this, SLOT(showQuestionCardList(vector<PQcard>, std::string)) );
	connect(myController_, SIGNAL( emitQuestionCardListContinue(vector<PQcard>, std::string)), this, SLOT(showQuestionCardList(vector<PQcard>, std::string)) );
	connect(myController_, SIGNAL(emitSuggestedMark(int) ), this, SLOT(setSuggesterMark(int) ) );


	//connect(this, SIGNAL(chooseCourse(std::string)), this, SLOT(on_beginChoose()) );
	//connect(this, SIGNAL(chooseContinueCourse(std::string)), this, SLOT(on_beginChoose()) );

	
	connect( verticalSlider, SIGNAL(valueChanged(int)),this, SLOT(changeValueOfSlider(int)) );
	

	onBeginHide();

}

View::~View()
{

}

void View::showQuestionCardList(vector<PQcard> vectorPQcard, std::string nameOfCourse)
{	

	/*boost::shared_ptr<QuestionCard> questiocard;
	questiocard= vectorPQcard.at(2);
	question->setText(QString::fromUtf8((questiocard->getQuestion()).c_str()));*/
	isInitial = true;
	counterProgressBar = 0;
	nameOfCourse_ = nameOfCourse;
	currentTask_ = 1;
	taskVector_ = vectorPQcard;
	numberOfAllTasks_ = taskVector_.size();
	setNumberOfQuestionToRevision();
	on_beginChoose();
	showCurrentTask();
	isInitial = false;

}


void View::on_beginChoose(){
	if(numberOfQuestionToRevision_ != 0){
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
	else{
		QMessageBox* msg = new QMessageBox(this->parentWidget());
		msg->setWindowTitle("Warning");
		std::string tmp = "You don't have any task to revision today ! \n Yuor next revision is : "+to_simple_string(mindateOfRevision_);
		msg->setText(QString::fromStdString(tmp));
		msg->setStandardButtons(QMessageBox::Ok);
		msg->show();	
	}
	

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

void View::on_actionSchedule_triggered(){
	Schedule *schedule= new Schedule(myController_,this);
	//this->setDisabled(true);
	schedule->setEnabled(true);
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
	question->hide();
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
	valueJudge->hide();
}

void View::prepareToOpen(){
	answerEditCloseA->hide();
	answerEditCloseB->hide();
	answerEditCloseC->hide();
	answerEditCloseD->hide();
	aButton->hide();
	bButton->hide();
	cButton->hide();
	dButton->hide();
	correctAnswer->hide();
}

void View::showCurrentTask(){
	isNextOrBack = true;
	questiocard_= taskVector_.at(currentTask_-1);
	boost::gregorian::date dateOfRevision = questiocard_->getNextDate();
	boost::gregorian::date now = boost::gregorian::day_clock::local_day();
	if(now >= dateOfRevision){
		counterProgressBar++;
		question->show();
		answerEditCloseA->setStyleSheet("QLabel {}");
		answerEditCloseB->setStyleSheet("QLabel {}");
		answerEditCloseC->setStyleSheet("QLabel {}");
		answerEditCloseD->setStyleSheet("QLabel {}");
		correctAnswer->hide();
	
		question->setText(QString::fromStdString(questiocard_->getQuestion()));
	
	
		if(judgeVector_.size() >= currentTask_){
			verticalSlider->setValue(judgeVector_.at(currentTask_-1) );
		}
		else{
			verticalSlider->setValue(0);
		
		}

		if(questiocard_->getQuestionType() == true){ //open answer
			currentTaskType_ = 1 ;
			answerOpenEdit->clear();
			answerOpenEdit->show();
			prepareToOpen();
		}
		else{
			isAClicked = false; 
			isBClicked = false;
			isCClicked = false;
			isDClicked = false;
			aButton->setStyleSheet("");
			bButton->setStyleSheet("");
			cButton->setStyleSheet("");
			dButton->setStyleSheet("");
			currentTaskType_ = 0;
			answerOpenEdit->hide();

			CloseAnswer closeAnswer = questiocard_->getcloseAnswer();
			if(closeAnswer.size() > 0){
				answerEditCloseA->setText(QString::fromStdString(closeAnswer.at(0).first) );
				answerEditCloseA->show();
				aButton->show();
				if(closeAnswer.size() > 1 && closeAnswer.at(1).first != ""){
					answerEditCloseB->setText(QString::fromStdString(closeAnswer.at(1).first) );
					answerEditCloseB->show();
					bButton->show();

				}
				
				if(closeAnswer.size() > 2 && closeAnswer.at(2).first != ""){
					answerEditCloseC->setText(QString::fromStdString(closeAnswer.at(2).first) );
					answerEditCloseC->show();
					cButton->show();
				}
				if(closeAnswer.size() > 3 && closeAnswer.at(3).first != ""){
					answerEditCloseD->setText(QString::fromStdString(closeAnswer.at(3).first) );
					answerEditCloseD->show();
					dButton->show();
				}
			}
		
	

		}
	}
	else{
		nextButton->setEnabled(true);
		backButton->setEnabled(true);
		/*int valueProgressBar =  ( ((double)(currentTask_-numberOfQuestionToRevision_)/(double)numberOfQuestionToRevision_) )*100;
		if(valueProgressBar > progressBar->value() )
			progressBar->setValue(valueProgressBar);*/

		if(currentTask_> judgeVector_.size() )
			judgeVector_.push_back(6);
		else
			judgeVector_.at(currentTask_ - 1) = 6;
		if(isNext)
			on_nextButton_clicked();
		else if(isInitial)
			on_nextButton_clicked();
		else
			on_backButton_clicked();

	}
	
	isNextOrBack = false;
}

void View::on_aButton_clicked(){
	if(isAClicked){
		aButton->setStyleSheet("");
		isAClicked = false;
	}
	else{
		aButton->setStyleSheet("background-color: green");
		isAClicked = true;
	}
}

void View::on_bButton_clicked(){
	if(isBClicked){
		bButton->setStyleSheet("");
		isBClicked = false;
	}
	else{
		bButton->setStyleSheet("background-color: green");
		isBClicked = true;
	}
}

void View::on_cButton_clicked(){
	if(isCClicked){
		cButton->setStyleSheet("");
		isCClicked = false;
	}
	else{
		cButton->setStyleSheet("background-color: green");
		isCClicked = true;
	}
}

void View::on_dButton_clicked(){
	if(isDClicked){
		dButton->setStyleSheet("");
		isDClicked = false;
	}
	else{
		dButton->setStyleSheet("background-color: green");
		isDClicked = true;
	}
}
void View::getCurrentTask(){

}

void View::setCurrentTask(){
}
void View::computeSuggestedMark(){
	
	if(currentTaskType_ == 1){ //open
		string userAnswer = answerOpenEdit->toPlainText().toStdString();
		string correctAnswer = questiocard_->getAnswerOpen();
		emit computeMark(currentTaskType_,userAnswer, correctAnswer);

	}
	else{
		vector<bool> userAnswer;
		vector<bool> correctAnswer;
		CloseAnswer close = questiocard_->getcloseAnswer();
		for(int i = 0; i < close.size(); i++){
			bool userValue;
			if(i == 0 && !aButton->isHidden()){
				userValue = isAClicked;
				userAnswer.push_back(userValue);
			}
			if(i == 1 && !bButton->isHidden()){
				userValue = isBClicked;
				userAnswer.push_back(userValue);
			}
			if(i == 2 && !cButton->isHidden()){
				userValue = isCClicked;
				userAnswer.push_back(userValue);
			}
			if(i == 3 && !dButton->isHidden()){
				userValue = isDClicked;
				userAnswer.push_back(userValue);
			}

			
			if(close.at(i).second == "True")
				correctAnswer.push_back(true);
			if(close.at(i).second == "False")
				correctAnswer.push_back(false);
		}
		emit computeMark(currentTaskType_,userAnswer, correctAnswer);

	}

}

void View::setSuggesterMark(int mark){
	verticalSlider->setValue(mark);
	judgeButton->click();
}
void View::on_nextButton_clicked(){
	
	if(currentTask_ < taskVector_.size() ){
		isNext = true;
		currentTask_++;
		showCurrentTask();
		//progressBar->setValue( ( ((double)(currentTask_-1)/(double)numberOfAllTasks_) )*100);
		if(judgeVector_.size() < currentTask_){
			nextButton->setDisabled(true);
			backButton->setDisabled(true);

		}
		isNext = false;
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
	questiocard_=taskVector_.at(currentTask_-1);
	computeSuggestedMark();
	valueJudge->show();
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

//	

}

void View::changeValueOfSlider(int value){
	
	valueJudge->setText(QString::number(value));
	if(!isNextOrBack){
		nextButton->setDisabled(true);
		backButton->setDisabled(true);
	}
}
void View::on_judgeButton_clicked(){

	nextButton->setEnabled(true);
	backButton->setEnabled(true);
	
	int valueProgressBar =  ( ((double)(counterProgressBar)/(double)numberOfQuestionToRevision_) )*100;
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
	qDebug() << "End";
	switch (reply) {
		case QMessageBox::Yes:

			//prepareToOpen();
			onBeginHide();
			Statistic *statistic = new Statistic(myController_,this);
			emit endCourse(judgeVector_,nameOfCourse_);
			
			

	}
}

void View::setNumberOfQuestionToRevision(){
	numberOfQuestionToRevision_ = 0;
	 mindateOfRevision_= taskVector_.at(0)->getNextDate();
	for(int i = 0; i < taskVector_.size(); i++){
		questiocard_= taskVector_.at(i);
		boost::gregorian::date dateOfRevision_ = questiocard_->getNextDate();
		boost::gregorian::date now = boost::gregorian::day_clock::local_day();
		if(now >= dateOfRevision_){
			numberOfQuestionToRevision_++;
		}
		if (mindateOfRevision_ >dateOfRevision_){mindateOfRevision_=dateOfRevision_;}
	}

}

