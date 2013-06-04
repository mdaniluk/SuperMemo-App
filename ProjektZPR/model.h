#ifndef MODEL_H
#define MODEL_H
#include "course.h"
#include "start.h"
#include "mark.h"
#include <QObject>
/**
 * Class represents Model in MVC.
 * @author Piotr Maleci & Michal Daniluk
 *
 */
class Model 
{
public:
	Model();
	~Model();
	/// used when set Next is pressed
	void setNext(int id, std::string question, std::string answer);
	/// to get pointer to course object
	Course* getCurrentCourse(){ return currentCourse; }
	/// to get pointer to start object
	Start* getCurrentStart(){ return start; }
	/// to get pointer to mark object
	Mark* getCurrentMark(){ return mark; }
	/// to save course
	void setSaveCourse(std::string nameOfFile);
	/// used to set list of files
	void setListOfFiles();
	/// used to choose course 
	void setChooseCourse(std::string course, bool flag);
	/// used when delete clicked
	void deleteChooseCourse(std::string course);
	/// when end clicked
	void endCourseAction(std::vector<int>, std::string);
	///used to count mark for open questions
	void computeOpenMark(int type, std::string user, std::string correct );
	/// used to count mark for close questions
	void computeCloseMark(int type , vector<bool> user, vector<bool> correct );
	/// used when continue clicked
	void setChooseCourseContinue(std::string name);
private:
	Course *currentCourse;
	Start *start;
	Mark *mark;
	Deck *deck;
	


};

#endif // MODEL_H
