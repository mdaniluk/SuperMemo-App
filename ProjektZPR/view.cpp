#include "view.h"
#include "createtest.h"
#include "startmenu.h"
#include <qmessagebox.h>

View::View(Controller* controller, QWidget *parent): myController_(controller), QMainWindow(parent){
	setupUi(this);
	qRegisterMetaType<list<PQcard>>("list<PQcard>");
	connect(myController_, SIGNAL(enabledMainWindow()), this, SLOT(enabledMainWin() ) );
	connect(myController_, SIGNAL(error(std::string)), this, SLOT(showError(std::string)) );
	connect(myController_, SIGNAL( emitQuestionCardList(list<PQcard>)), this, SLOT(showQuestionCardList(list<PQcard>)) );
	connect(this, SIGNAL(chooseCourse(std::string)), this, SLOT(on_beginChoose()) );

	onBeginHide();
}
View::~View()
{

}
void View::showQuestionCardList(list<PQcard> listPQcard)
{	
	boost::shared_ptr<QuestionCard> questiocard;
	questiocard= listPQcard.back();
	question->setText(QString::fromStdString(questiocard->getQuestion()));

	
}
void View::on_beginChoose(){
	progressBar->show();
	answer_button->show();
	judge_button->show();
	end_button->show();
	trudne->show();
	latwe->show();
	verticalSlider->show();
	label->hide();
	label_2->hide();
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
	answer_button->hide();
	judge_button->hide();
	end_button->hide();
	trudne->hide();
	latwe->hide();
	verticalSlider->hide();
	label->show();
	label_2->show();
}