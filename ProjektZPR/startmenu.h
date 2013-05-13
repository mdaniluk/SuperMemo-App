#ifndef STARTMENU_H
#define STARTMENU_H

#include <QWidget>
#include "ui_startmenu.h"

class StartMenu : public QWidget
{
	Q_OBJECT

public:
	StartMenu(QWidget *parent = 0);
	~StartMenu();

private:
	Ui::StartMenu ui;
};

#endif // STARTMENU_H
