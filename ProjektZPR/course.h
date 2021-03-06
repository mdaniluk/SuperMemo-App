#ifndef COURSE_H
#define COURSE_H

#include <vector>
using namespace std;
/**
 * Class represents logic of course creator
 * @author Piotr Maleci & Michal Daniluk
 *
 */
class Course
{
public:
	Course(void);
	~Course();
	vector<string> getQuestions() { return questions; }
	vector<string> getAnswers() { return answers; }
	string getQuestions(int index);
	string getAnswers(int index);
	void setQuestions(int id, string question);
	void setAnswers(int id, string answer);
	void writeToXML(std::string nameOfFile);
private:
	vector<string> questions;
	vector<string> answers;
	int numberOfQuestions_;
};

#endif // COURSE_H