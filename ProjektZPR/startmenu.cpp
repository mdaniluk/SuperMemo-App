#include "startmenu.h"

StartMenu::StartMenu(Controller *controller, View *parent)
	: QDialog(parent), myView_(parent), myController_(controller)
{	
	setAttribute(Qt::WA_DeleteOnClose, true);
	setupUi(this);
	show();
}

StartMenu::~StartMenu()
{

}

