#include "course.h"
#include <QtXml\qdom.h>
#include <QtXml\qxml.h>
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
void Course::writeToXML(std::string nameOfFile){
	QDomDocument document;
	QDomElement superMemo = document.createElement("SuperMemo");
	document.appendChild(superMemo);
	for(int i = 1; i <= questions.size(); i++){
		if(questions[i-1] != "" && answers[i-1] != ""){
			QDomElement task = document.createElement("Task");
			task.setAttribute("Id", i);
			superMemo.appendChild(task);
	
			QDomElement question = document.createElement("Question");
			question.setAttribute("Id", i);
			task.appendChild(question);

			QDomText questionText = document.createTextNode(QString::fromStdString(questions[i-1]) );
			question.appendChild(questionText);

			QDomElement answer = document.createElement("AnswerOpen");
					answer.setAttribute("Id", i);
					task.appendChild(answer);
					QDomText answerText = document.createTextNode(QString::fromStdString(answers[i-1]) );
					answer.appendChild(answerText);
		}
		
	}
	QFile file("C:/Users/Michal/Desktop/" + QString::fromStdString(nameOfFile) + ".xml");
		if(!file.open(QIODevice::WriteOnly | QIODevice::Text) ){
	}
	else{
		QTextStream stream(&file);
		stream << document.toString();
		file.close();
	}
	//this->close();
}
