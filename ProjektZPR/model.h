#ifndef MODEL_H
#define MODEL_H
#include "course.h"
#include <QObject>

class Model 
{
public:
	Model();
	~Model();
	void setNext(int id, std::string question, std::string answer);
	Course* getCurrentCourse(){ return currentCourse; }
	void setSaveCourse();
private:
	Course *currentCourse;
	int a;
};

#endif // MODEL_H
