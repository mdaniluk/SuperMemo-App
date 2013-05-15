#ifndef CREATENEWTEST_H
#define CREATENEWTEST_H

#include <QWidget>
#include "ui_createnewtest.h"
#include <QString>
class CreateNewTest : public QWidget
{
	Q_OBJECT

public:
	CreateNewTest(QWidget *parent = 0);
	~CreateNewTest();

private:
	Ui::CreateNewTest ui;
	QString *questions;
	int number;
private slots:
	void nextQuestion();
	void backQuestion();
};

#endif // CREATENEWTEST_H
