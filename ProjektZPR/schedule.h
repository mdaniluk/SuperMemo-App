#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <QDialog>
#include "ui_schedule.h"
#include "view.h"
#include "controller.h"
#include "deck.h"
class Controller; 
class View;
typedef boost::shared_ptr<Deck> PDeck;
class Schedule : public QDialog, public Ui::Schedule
{
	Q_OBJECT

public:
	Schedule(Controller *controller, View *parent = NULL);
	~Schedule();
	void setListOfCourses();
	void loadFromFileCurrentState(Deck &s,  const char* filename);
private:
	vector<PDeck> vectorOfDecks;
	View *myView_;
	Controller *myController_;
	std::vector<std::string> filesTxt;
};

#endif // SCHEDULE_H
