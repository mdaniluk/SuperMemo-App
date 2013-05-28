#ifndef VIEW_H
#define VIEW_H
#include <QtWidgets/QMainWindow>
#include "ui_projektzpr.h"
#include "controller.h"
#include "deck.h"
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
	void chooseCourse(std::string);
	void closeAnyWindow();
	void deleteCourse(std::string);
private slots:
	void on_actionStart_triggered();
	void on_actionNew_Course_triggered();
	void on_beginChoose();
	
public slots:
	void enabledMainWin();
	void showYou();
	void showError(std::string message);
	void showQuestionCardList(list<PQcard>);
private:
	Controller* myController_;
	void onBeginHide();

};

#endif // VIEW_H
