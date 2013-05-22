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
public slots:
	void addTaskNext(int id, std::string question, std::string answer);
	void addTaskBack(int id, std::string question, std::string answer);
	void addLastTask(int id, std::string question, std::string answer);
	void activateNext();
	void addTask(int id, std::string question, std::string answer);
	void testSlot(int id,std::string question, std::string answer);
	void addSaveCourse(std::string nameOfFile);
	
private:
	View *view_;
	Model *model_;
	
};

#endif // CONTROLLER_H
