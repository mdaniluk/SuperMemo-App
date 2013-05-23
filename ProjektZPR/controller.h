#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "view.h"
#include "model.h"
class View;

class Controller : public QObject
{
	Q_OBJECT

public:
	explicit Controller();
	~Controller();
	void connectView(View *view);

signals:
	void goNext(int id,std::string question, std::string answer);
	void closeCreator();
	void getListOfCourses(std::vector<std::string>);
	void closeStartWindow();
public slots:
	void addTaskNext(int id, std::string question, std::string answer);
	void addTaskBack(int id, std::string question, std::string answer);
	void addLastTask(int id, std::string question, std::string answer);
	void addSaveCourse(std::string nameOfFile);
	void addListOfFiles();
	void addChooseCourse();
	void addcloseStartWindow();
private:
	View *view_;
	Model *model_;
	
};

#endif // CONTROLLER_H
