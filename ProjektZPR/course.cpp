#include "course.h"
#include <QtXml\qdom.h>
#include <QtXml\qxml.h>
#include <boost\regex.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <boost/lexical_cast.hpp>
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
			
			if(boost::starts_with(answers[i-1], "@@@") || boost::starts_with(answers[i-1], "%%%") ||
				boost::starts_with(answers[i-1], "!!!") || boost::starts_with(answers[i-1], "&&&") ){

				QDomElement answer = document.createElement("AnswerClose");
				answer.setAttribute("Id", i);
				task.appendChild(answer);
				
				boost::regex matcherA("\\@@@(.*?)\\@###");
				boost::smatch result;
				boost::regex matcherValueA("\\@###(.*?)\\@@@");
				boost::smatch resultValue;

				boost::regex matcherB("\\%%%(.*?)\\%###");
				boost::regex matcherValueB("\\%###(.*?)\\%%%");

				boost::regex matcherC("\\!!!(.*?)\\!###");
				boost::regex matcherValueC("\\!###(.*?)\\!!!");

				boost::regex matcherD("\\&&&(.*?)\\&###");
				boost::regex matcherValueD("\\&###(.*?)\\&&&");

				if(boost::regex_search(answers[i-1], result, matcherA) ){
					if(boost::regex_search(answers[i-1], resultValue, matcherValueA) ){
						QDomElement answerA = document.createElement("a");
						answerA.setAttribute("Value", QString::fromStdString(resultValue[1]) );
						answer.appendChild(answerA);
						QDomText answerText = document.createTextNode(QString::fromStdString(result[1]) );
						answerA.appendChild(answerText);
					}
				}

				if(boost::regex_search(answers[i-1], result, matcherB) ){
					if(boost::regex_search(answers[i-1], resultValue, matcherValueB) ){
						QDomElement answerB = document.createElement("b");
						answerB.setAttribute("Value", QString::fromStdString(resultValue[1]) );
						answer.appendChild(answerB);
						QDomText answerText = document.createTextNode(QString::fromStdString(result[1]) );
						answerB.appendChild(answerText);
					}
				}

				if(boost::regex_search(answers[i-1], result, matcherC) ){
					if(boost::regex_search(answers[i-1], resultValue, matcherValueC) ){
						QDomElement answerC = document.createElement("c");
						answerC.setAttribute("Value", QString::fromStdString(resultValue[1]) );
						answer.appendChild(answerC);
						QDomText answerText = document.createTextNode(QString::fromStdString(result[1]) );
						answerC.appendChild(answerText);
					}
				}

				if(boost::regex_search(answers[i-1], result, matcherD) ){
					if(boost::regex_search(answers[i-1], resultValue, matcherValueD) ){
						QDomElement answerD = document.createElement("d");
						answerD.setAttribute("Value", QString::fromStdString(resultValue[1]) );
						answer.appendChild(answerD);
						QDomText answerText = document.createTextNode(QString::fromStdString(result[1]) );
						answerD.appendChild(answerText);
					}
				}
			}
			else{
				QDomElement answer = document.createElement("AnswerOpen");
				answer.setAttribute("Id", i);
				task.appendChild(answer);
				QDomText answerText = document.createTextNode(QString::fromStdString(answers[i-1]) );
				answer.appendChild(answerText);
			}
	
		}
		
	}
	QFile file("resources/" + QString::fromStdString(nameOfFile) + ".xml");
		if(!file.open(QIODevice::WriteOnly | QIODevice::Text) ){
	}
	else{
		QTextStream stream(&file);
		stream << document.toString();
		file.close();
	}

}

