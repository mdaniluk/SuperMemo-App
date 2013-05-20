#ifndef VIEW_H
#define VIEW_H
#include <QtWidgets/QMainWindow>
#include "ui_projektzpr.h"
#include "ui_newtest.h"
#include "projektzpr.h"
#include "controller.h"
class Controller;

class View : public QMainWindow, public Ui::NewTest
{
	Q_OBJECT
public:
	explicit View(Controller* controller, QWidget *parent = NULL);
	~View();
signals:
	void clikedCreateNewTest();
	void askedNext();
	void askedBack();
public slots:
	void createNewTest();
	void showYou();
private:
	Controller* myController;



	
};

#endif // VIEW_H
