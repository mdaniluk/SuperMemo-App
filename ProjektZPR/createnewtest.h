#ifndef CREATENEWTEST_H
#define CREATENEWTEST_H

#include <QWidget>
#include "ui_createnewtest.h"

class CreateNewTest : public QWidget
{
	Q_OBJECT

public:
	CreateNewTest(QWidget *parent = 0);
	~CreateNewTest();

private:
	Ui::CreateNewTest ui;
};

#endif // CREATENEWTEST_H
