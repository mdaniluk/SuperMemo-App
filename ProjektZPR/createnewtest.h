#ifndef CREATENEWTEST_H
#define CREATENEWTEST_H

#include <QWidget>
#include "ui_createnewtest.h"
#include <QString>
/**
* Create a new TestWindow to create your own test
* \author Michal Daniluk & Piotr Malecki
*/
class CreateNewTest : public QWidget
{
	Q_OBJECT

public:
	/// Constructor
	CreateNewTest(QWidget *parent = 0);
	~CreateNewTest();

private:
	Ui::CreateNewTest ui;
	QString *questions; ///<array of questions 
	QString *answers; ///<array of answers
	int number; ///< number of current question
	bool isNextOrBack; ///< check if you are in next or back method
	int numberOfQuestions; ///< total number of questions
	
	/**
	* @brief save current task to questions and answers arrays 
	*/
	void getTask();

	/**
	* @brief set question and answer in TextEdit 
	*/
	void setTask();
private slots:

	/**
	* @brief go to next task
	*/
	void nextQuestion();
	
	/**
	* @brief go to previous task
	*/
	void backQuestion();

	/**
	* @brief check if you change your close and open tabs
	*/
	void currentChangedSlot();
	
	/**
	* @brief save course to XML file
	*/
	void saveCourse();
};

#endif // CREATENEWTEST_H
