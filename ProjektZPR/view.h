#ifndef VIEW_H
#define VIEW_H
#include <QtWidgets/QMainWindow>
#include "ui_projektzpr.h"

#include "projektzpr.h"
#include "controller.h"
class Controller;

class View : public QMainWindow, public Ui::mainWindow
{
	Q_OBJECT
public:
	explicit View(Controller* controller, QWidget *parent = NULL);
	~View();
signals:
	void setCurrentTask(int id, std::string question, std::string answer);
	void testCurrentSignal(int,std::string, std::string);

private slots:
	void on_actionStart_triggered();
	void on_actionNew_Course_triggered();
public slots:
	
	void showYou();
private:
	Controller* myController_;

};

#endif // VIEW_H
