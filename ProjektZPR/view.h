#ifndef VIEW_H
#define VIEW_H
#include <QtWidgets/QMainWindow>
#include <QTextCodec>
#include "ui_projektzpr.h"
#include "controller.h"
#include "deck.h"

typedef boost::shared_ptr<QuestionCard> PQcard;

class Controller;
/**
 * Class represents the main application window. It is a View in design pattern - Model View Controller
 * @author Piotr Malecki & Michal Daniluk
 *
 */
class View : public QMainWindow, public Ui::mainWindow
{
	Q_OBJECT
public:
	///Constructor set Controller and Widget 
	explicit View(Controller* controller, QWidget *parent = NULL);
	~View();
signals:
	///Emit during creating new course to save current task, when we go to next task. It contains task id, question and answer.
	void setCurrentTaskNext(int id, std::string question, std::string answer);
	///Emit during creating new course to save current task, when we go to previous task. It contains task id, question and answer.
	void setCurrentTaskBack(int id, std::string question, std::string answer);
	///Emit during creating new course to save last task when we clicked saveButton. It contains task id, question and answer.
	void setLastTask(int id, std::string question, std::string answer);
	///Emit during creating new course to save course. It contains name od course.
	void saveCurrentCourse(std::string);
	///Emit to show list of course, when we click Start .
	void showCurrentListOfFiles();
	///Emit when we choose new Course. It contains name of course.
	void chooseCourse(std::string, bool flag);

	void chooseContinueCourse(std::string);

	///Emit when we close any window
	void closeAnyWindow();
	/// Emit when we want to delete any course. It contains name of this course. 
	void deleteCourse(std::string);
	///Emit when we want to finish our course. It contains marks and name of course.
	void endCourse(vector<int>, std::string);
	///Emit when we click answerButton to compute mark of open question. It contains type of question, user answer and correct answer. 
	void computeMark(int, std::string, std::string);
	///Emit when we click answerButton to compute mark of close question. It contains type of question, user answer and correct answer.
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
	/// set enable main window
	void enabledMainWin();
	/// show main window
	void showYou();
	/// show warning message 
	void showError(std::string message);
	/// set initial value and show first task
	void showQuestionCardList(vector<PQcard>, std::string);
	/// change judgeLabel when value of slider change
	void changeValueOfSlider(int);
	/// set suggested mark
	void setSuggesterMark(int);
	//void showQuestionCardListContinue(vector<PQcard>, std::string);
private:
	Controller* myController_;
	/// hide some elements on the begin
	void onBeginHide();
	vector<PQcard> taskVector_;
	boost::shared_ptr<QuestionCard> questiocard_; ///< pointers on QuestionCard

	int currentTask_;///< number of current task
	int currentTaskType_; ///< current task type  1 - open, 0 - close
	int numberOfAllTasks_; ///< number of all task
	vector<int> judgeVector_; ///< vector marks
	void prepareToClose(); ///< preapre window to show close answer
	void prepareToOpen(); ///< preapre window to show open answer
	void showCurrentTask(); 
	void getCurrentTask();
	void setCurrentTask();
	void computeSuggestedMark();
	int mark_;
	bool isAClicked;
	bool isBClicked;
	bool isCClicked;
	bool isDClicked;
	bool isNextOrBack;
	bool isNext;
	string nameOfCourse_;
};

#endif // VIEW_H
