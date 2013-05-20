#include "projektzpr.h"
#include "view.h" 
#include "controller.h" 
#include <QtWidgets/QApplication>
#include <QThread>
#include "newtestdialog.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Controller controller;
	View view(&controller);
	controller.connectView(&view);

	QThread controllerThread;
	controller.moveToThread(&controllerThread);
	view.connect(&controllerThread, SIGNAL(started()), SLOT(showYou()));
	controllerThread.start();
	controllerThread.connect(&view, SIGNAL(askedQuit()), SLOT(quit()));

	//ProjektZPR w;
	//w.show();
	/*NewTestDialog w;
	w.show();*/
	return a.exec();
}
