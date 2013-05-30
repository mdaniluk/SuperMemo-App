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
	void endCourseAction(std::vector<int>);
	void computeOpenMark(int type, std::string user, std::string correct );
	void computeCloseMark(int type , vector<bool> user, vector<bool> correct );
	void setChooseCourseContinue(std::string name);
private:
	Course *currentCourse;
	Start *start;
	Mark *mark;
	Deck *deck;
	


};

#endif // MODEL_H
