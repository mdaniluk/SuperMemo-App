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
protected:
	void closeEvent(QCloseEvent *event);
signals:
	void showListOfFiles();
	void choose();
	void closeStart();
private:
	View *myView_;
	Controller *myController_;
private slots:
	void on_choose_clicked();
public slots:
	void setListOfCourses(std::vector<std::string> listOfFiles);
	void closeWindow();
};

#endif // STARTMENU_H
