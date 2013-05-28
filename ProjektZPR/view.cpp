#include "view.h"
#include "createtest.h"
#include "startmenu.h"
#include <qmessagebox.h>

View::View(Controller* controller, QWidget *parent): myController_(controller), QMainWindow(parent){
	setupUi(this);
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
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
	boost::shared_ptr<QuestionCard> questiocard;
	questiocard= vectorPQcard.at(2);
	question->setText(QString::fromUtf8((questiocard->getQuestion()).c_str()));

	
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