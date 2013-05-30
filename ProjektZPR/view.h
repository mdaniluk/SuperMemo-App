#ifndef VIEW_H
#define VIEW_H
#include <QtWidgets/QMainWindow>
#include <QTextCodec>
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
	void endCourse(vector<int>);
	void computeMark(int, std::string, std::string);
	void computeMark(int, vector<bool>, vector<bool>);

private slots:
	void on_actionStart_triggered();
	void on_actionNew_Course_triggered();
	void on_beginChoose();
	void on_nextButton_clicked();
	void on_backButton_clicked();
	void on_answerButton_clicked();
	void on_judgeButton_clicked();
	void on_endButton_clicked();
	void on_aButton_clicked();
	void on_bButton_clicked();
	void on_cButton_clicked();
	void on_dButton_clicked();
public slots:
	void enabledMainWin();
	void showYou();
	void showError(std::string message);
	void showQuestionCardList(vector<PQcard>);
	void changeValueOfSlider(int);
	void setSuggesterMark(int);
private:
	Controller* myController_;
	void onBeginHide();
	vector<PQcard> taskVector_;
	boost::shared_ptr<QuestionCard> questiocard_;

	int currentTask_;
	int currentTaskType_; // 1 - open, 0 - close
	int numberOfAllTasks_;
	vector<int> judgeVector_;
	void prepareToClose();
	void prepareToOpen();
	void showCurrentTask(); 
	void getCurrentTask();
	void setCurrentTask();
	void computeSuggestedMark();
	int mark_;
	bool isAClicked;
	bool isBClicked;
	bool isCClicked;
	bool isDClicked;
};

#endif // VIEW_H
