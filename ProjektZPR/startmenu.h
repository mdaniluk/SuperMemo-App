#ifndef STARTMENU_H
#define STARTMENU_H

#include <QDialog>
#include "ui_startmenu.h"
#include "view.h"
#include "controller.h"

class StartMenu : public QDialog,  public Ui::StartMenu
{
	Q_OBJECT

public:
	StartMenu(Controller *controller, View *parent = NULL);
	~StartMenu();
signals:
	void showListOfFiles();
private:
	View *myView_;
	Controller *myController_;
public slots:
	void setListOfCourses(std::vector<std::string> listOfFiles);
};

#endif // STARTMENU_H
