#ifndef PROJEKTZPR_H
#define PROJEKTZPR_H

#include <QtWidgets/QMainWindow>
#include "ui_projektzpr.h"

class ProjektZPR : public QMainWindow
{
	Q_OBJECT

public:
	ProjektZPR(QWidget *parent = 0);
	~ProjektZPR();

private:
	Ui::ProjektZPRClass ui;
};

#endif // PROJEKTZPR_H
