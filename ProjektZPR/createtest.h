#ifndef CREATETEST_H
#define CREATETEST_H

#include <QWidget>
#include <QDialog>
#include "ui_createtest.h"
#include "view.h"
#include "controller.h"
/**
 * Class represents test creator dialog.
 * @author Piotr Maleci & Michal Daniluk
 *
 */
class CreateTest : public QDialog, public Ui::CreateTest
{
	Q_OBJECT

public:
	CreateTest(Controller *controller, View *parent = NULL);
	~CreateTest();
	void closeEvent(QCloseEvent *event);
signals:
	/// emit when we click next to set current task
	void setTaskNext(int id, std::string question, std::string answer);
	/// emit when we click back to set current task
	void setTaskBack(int id, std::string question, std::string answer);
	/// emit when we click save to set last task
	void setLastTask(int id, std::string question, std::string answer);
	void saveCourse(std::string);
	void closeCreator();
private slots:
	void on_next_clicked();
	void on_back_clicked();
	void on_save_clicked();
	void on_help_clicked();
public slots:
	/// refresh task when we back to previus task, wchich we agreed. 
	void refreshTask(int number,std::string question, std::string answer);
	/// show waring message when we want to change type of answer when we wrote one of them
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
