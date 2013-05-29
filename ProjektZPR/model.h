#ifndef MODEL_H
#define MODEL_H
#include "course.h"
#include "start.h"
#include "mark.h"
#include <QObject>

class Model 
{
public:
	Model();
	~Model();
	void setNext(int id, std::string question, std::string answer);
	Course* getCurrentCourse(){ return currentCourse; }
	Start* getCurrentStart(){ return start; }
	Mark* getCurrentMark(){ return mark; }
	void setSaveCourse(std::string nameOfFile);
	void setListOfFiles();
	void setChooseCourse(std::string course);
	void deleteChooseCourse(std::string course);
	void computeOpenMark(int type, std::string user, std::string correct );
	void computeCloseMark(int type , vector<bool> user, vector<bool> correct );
private:
	Course *currentCourse;
	Start *start;
	Mark *mark;
};

#endif // MODEL_H
