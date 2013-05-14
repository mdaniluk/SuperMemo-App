#ifndef PROJEKTZPR_H
#define PROJEKTZPR_H

#include <QtWidgets/QMainWindow>
#include "ui_projektzpr.h"
#include "startmenu.h"
#include "createnewtest.h"
class ProjektZPR : public QMainWindow, private Ui::ProjektZPRClass
{
	Q_OBJECT
	
public:
	ProjektZPR(QWidget *parent = 0);
	~ProjektZPR();
private:
	Ui::ProjektZPRClass ui;
	StartMenu *st;
	CreateNewTest *newCourseWindow;
	
private slots:
	void start();
	void newTest();
	void pushButtonTest();
};

#endif // PROJEKTZPR_H
