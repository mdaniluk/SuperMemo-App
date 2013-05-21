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
	void setTask(int id, std::string question, std::string answer);
	void testSignal(int, std::string, std::string);
private slots:
	void on_next_clicked();
	void on_back_clicked();
private:
	View *myView_;
	Controller *myController_;
	int number_;
};

#endif // CREATETEST_H
