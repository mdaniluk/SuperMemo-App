#include "projektzpr.h"
ProjektZPR::ProjektZPR(QWidget *parent)
	: QMainWindow(parent)
{
	setupUi(this);
}

ProjektZPR::~ProjektZPR()
{
	/*if(st != nullptr)
		delete st;
	if(newCourseWindow != nullptr)
		delete newCourseWindow;*/
	//wroc tu
}
void ProjektZPR::start(){

	st = new StartMenu();

	st->show();


	
	/*USTAWIC DELETE st*/
}
void  ProjektZPR::newTest(){
	newCourseWindow = new CreateNewTest();
	newCourseWindow->show();


}
void  ProjektZPR::pushButtonTest(){
	newCourseWindow = new CreateNewTest();
	newCourseWindow->show();
}

