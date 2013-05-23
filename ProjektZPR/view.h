#ifndef VIEW_H
#define VIEW_H
#include <QtWidgets/QMainWindow>
#include "ui_projektzpr.h"
#include "controller.h"
class Controller;

class View : public QMainWindow, public Ui::mainWindow
{
	Q_OBJECT
public:
	explicit View(Controller* controller, QWidget *parent = NULL);
	~View();
signals:
	void setCurrentTaskNext(int id, std::string question, std::string answer);
	void setCurrentTaskBack(int id, std::string question, std::string answer);
	void setLastTask(int id, std::string question, std::string answer);
	void saveCurrentCourse(std::string);
	void showCurrentListOfFiles();

private slots:
	void on_actionStart_triggered();
	void on_actionNew_Course_triggered();
	void close();
public slots:
	
	void showYou();
private:
	Controller* myController_;

};

#endif // VIEW_H
