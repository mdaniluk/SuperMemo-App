#ifndef VIEW_H
#define VIEW_H
#include <QtWidgets/QMainWindow>
#include "ui_projektzpr.h"
#include "controller.h"
#include "deck.h"

typedef boost::shared_ptr<QuestionCard> PQcard;

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
	void on_nextButton_clicked();
	void on_backButton_clicked();
public slots:
	void enabledMainWin();
	void showYou();
	void showError(std::string message);
	void showQuestionCardList(vector<PQcard>);
private:
	Controller* myController_;
	void onBeginHide();
	vector<PQcard> taskVector_;

	int currentTask_;
	int numberOfAllTasks_;
	void prepareToClose();
	void prepareToOpen();
	void showCurrentTask(); 

};

#endif // VIEW_H
