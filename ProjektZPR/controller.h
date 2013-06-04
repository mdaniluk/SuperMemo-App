#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "view.h"
#include "model.h"
class View;
/**
 * Class represents Controller in MVC. It communicate between Model and View.It respond on user actions, calls up methods from Model
 * to get data. Controller emits signals to inform View about change model state.
 * @author Piotr Maleci & Michal Daniluk
 *
 */
class Controller : public QObject
{
	Q_OBJECT

public:
	explicit Controller();
	~Controller();
	///connect View to controller
	void connectView(View *view);

signals:
	///emit when we catch exception.
	void error(std::string);
	/// emit when we create course and go to next question. It contains task id,question and answer.
	void goNext(int id,std::string question, std::string answer);
	/// emit when we save course to close creator window
	void closeCreator();
	/// emit list of names xml files with courses
	void getListOfCourses(std::vector<std::string>);
	/// emit when we choose course to close window
	void closeStartWindow();
	/// set enable main window when any other window close
	void enabledMainWindow();
	/// emit Question Card List and name of current course
	void emitQuestionCardList(vector<PQcard>,std::string);
	// emit when choosed option Contiunue
	void emitQuestionCardListContinue(vector<PQcard>,std::string);
	// emit suggested mark counted by computer
	void emitSuggestedMark(int);
	/// emit marks to statistic
	void showStats(vector<int>);
public slots:
	/// add current task when we click next in course creator
	void addTaskNext(int id, std::string question, std::string answer);
	/// add current task when we click back in course creator
	void addTaskBack(int id, std::string question, std::string answer);
	/// add current task when we click save in course creator
	void addLastTask(int id, std::string question, std::string answer);
	/// set course in creator
	void addSaveCourse(std::string nameOfFile);
	/// set list names of courses
	void addListOfFiles();
	/// show chosen course
	void addChooseCourse(std::string course, bool flag);
	void addCloseAnyWindow();
	void deleteChooseCourse(std::string course);

	void computeMarkForOpen(int, std::string, std::string);
	void computeMarkForClose(int, vector<bool>, vector<bool>);

	void endCourseJudge(vector<int>, std::string);
	void addChooseCourseContinue(std::string name);


	/// end of course
	void addEndCourse(vector<int>, std::string);

private:
	View *view_;
	Model *model_;
	
};

#endif // CONTROLLER_H
