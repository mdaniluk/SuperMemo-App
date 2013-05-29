#ifndef MODEL_H
#define MODEL_H
#include "course.h"
#include "start.h"
#include <QObject>

class Model 
{
public:
	Model();
	~Model();
	void setNext(int id, std::string question, std::string answer);
	Course* getCurrentCourse(){ return currentCourse; }
	Start* getCurrentStart(){ return start; }
	void setSaveCourse(std::string nameOfFile);
	void setListOfFiles();
	void setChooseCourse(std::string course);
	void deleteChooseCourse(std::string course);
	void endCourseAction(std::vector<int>);
private:
	Course *currentCourse;
	Start *start;
	Deck *deck;
};

#endif // MODEL_H
