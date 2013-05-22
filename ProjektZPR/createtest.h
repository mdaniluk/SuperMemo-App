#ifndef CREATETEST_H
#define CREATETEST_H

#include <QWidget>
#include <QDialog>
#include "ui_createtest.h"
#include "view.h"
#include "controller.h"

class CreateTest : public QDialog, public Ui::CreateTest
{
	Q_OBJECT

public:
	CreateTest(Controller *controller, View *parent = NULL);
	~CreateTest();
signals:
	void setTaskNext(int id, std::string question, std::string answer);
	void setTaskBack(int id, std::string question, std::string answer);
	void setLastTask(int id, std::string question, std::string answer);
	void saveCourse(std::string);
private slots:
	void on_next_clicked();
	void on_back_clicked();
	void on_save_clicked();
public slots:
	void refreshTask(int number,std::string question, std::string answer);
	void currentChangedSlot(int index);
	void closeWindow();
private:
	View *myView_;
	Controller *myController_;
	int number_;
	string answer_;
	string question_;
	int numberOfQuestions_;
	bool isNextOrBack_;
	void getTask();
	void currentChangedTab();
	
};

#endif // CREATETEST_H
