#include "createnewtest.h"

CreateNewTest::CreateNewTest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	number = 1;
	
}

CreateNewTest::~CreateNewTest()
{

}
void CreateNewTest::nextQuestion(){
	number++;
	ui.questionNumber->setText(QString::number(number));
	QString *questions = new QString[100];
	questions[1] = ui.questionEdit->toPlainText();
	ui.answerCloseAEdit->setText(questions[1]);
}