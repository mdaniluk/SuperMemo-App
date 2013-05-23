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
	Start* getCurrentStart(){ return startMenu; }
	void setSaveCourse(std::string nameOfFile);
	void setListOfFiles();
private:
	Course *currentCourse;
	Start *startMenu;
};

#endif // MODEL_H
