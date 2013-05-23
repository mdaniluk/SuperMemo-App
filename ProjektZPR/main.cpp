#include "view.h" 
#include "controller.h" 
#include "deck.h"
#include <QtWidgets/QApplication>
#include <QThread>

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

	std::ifstream plik("resources/ciekawostki.xml");
	if (!plik.is_open()){

		throw LackFile("Lack of file");
	}
	std::stringstream buffer;
	buffer << plik.rdbuf();
	Deck *d= new Deck(buffer);

	return a.exec();
}
