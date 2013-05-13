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

}
void ProjektZPR::start(){
	StartMenu *st = new StartMenu();
	st->show();

	/*USTAWIC DELETE st*/
}