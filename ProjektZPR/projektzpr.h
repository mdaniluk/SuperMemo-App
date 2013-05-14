#ifndef PROJEKTZPR_H
#define PROJEKTZPR_H

#include <QtWidgets/QMainWindow>
#include "ui_projektzpr.h"
#include "startmenu.h"
class ProjektZPR : public QMainWindow, private Ui::ProjektZPRClass
{
	Q_OBJECT

public:
	ProjektZPR(QWidget *parent = 0);
	~ProjektZPR();
private:
	Ui::ProjektZPRClass ui;
	StartMenu *st;
private slots:
	void start();
	
};

#endif // PROJEKTZPR_H
