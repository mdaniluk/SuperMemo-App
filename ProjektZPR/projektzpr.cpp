#include "projektzpr.h"
#include "startmenu.h"
ProjektZPR::ProjektZPR(QWidget *parent)
	: QMainWindow(parent)
{
	setupUi(this);
	QObject::connect(actionStart, SIGNAL(triggered() ), this, SLOT( start() ) );
}

ProjektZPR::~ProjektZPR()
{
	if(st != nullptr)
		delete st;
	//wroc tu
}
void ProjektZPR::start(){
	st = new StartMenu();
	st->show();

	/*USTAWIC DELETE st*/
}