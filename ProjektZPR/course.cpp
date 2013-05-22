#include "course.h"
Course::Course(){
	numberOfQuestions_ = 0;
}
void Course::setQuestions(int id, string question){
	if(id > questions.size() ){
		questions.push_back(question);
		numberOfQuestions_ = questions.size();
	}
	else
		questions[id-1] = question;
}
void Course::setAnswers(int id, string answer){
	if(id > answers.size() )
		answers.push_back(answer);
	else
		answers[id-1] = answer;
}
string Course::getQuestions(int index){
	if(index > questions.size() )
		return "";
	else
		return questions[index-1]; 
}
string Course::getAnswers(int index){
	if(index > answers.size() )
		return "";
	else
		return answers[index-1]; 
}
void Course::writeToXML(){
	
}
