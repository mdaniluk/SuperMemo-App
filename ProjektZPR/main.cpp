#include "view.h" 
#include "controller.h" 
#include <QtWidgets/QApplication>
#include <QThread>
<<<<<<< HEAD
=======

>>>>>>> piotrek
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


	return a.exec();
}
