#ifndef STARTMENU_H
#define STARTMENU_H

#include <QDialog>
#include "ui_startmenu.h"
#include "view.h"
#include "controller.h"
/**
 * Class represents start menu dialog.
 * @author Piotr Maleci & Michal Daniluk
 *
 */

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
	void choose(std::string, bool);
	void chooseContinue(std::string);
	void closeStart();
	void deleteCourse(std::string);
private:
	View *myView_;
	Controller *myController_;
private slots:
	void on_choose_clicked();
	void on_continueButton_clicked();
	void on_deleteButton_clicked();
public slots:
	void setListOfCourses(std::vector<std::string> listOfFiles);
	void closeWindow();
};

#endif // STARTMENU_H
