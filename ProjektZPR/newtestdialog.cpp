#include "newtestdialog.h"

NewTestDialog::NewTestDialog(Controller *controller, View *parent): QDialog(parent), myView(parent), myController(controller)
	
{	//setAttribute(Qt::WA_DeleteOnClose, true);
	ui.setupUi(this);

	//Po³¹czenia wychodz¹ce
	connect(this, SIGNAL(goNext()), myView, SIGNAL(askedNext()));
	connect(this, SIGNAL(goBack()), myView, SIGNAL(askedBack()));
}

NewTestDialog::~NewTestDialog()
{

}
NewTestDialog::NewTestDialog()
{
	ui.setupUi(this);
}
void NewTestDialog::on_next_clicked(){

	//myView->actionNext->trigger();
	emit goNext();
	//label->hide();
}
void NewTestDialog::on_back_clicked(){

}
void NewTestDialog::test(){
	
	emit goNext();
}