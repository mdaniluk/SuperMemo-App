#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "view.h"
#include "model.h"
class View;

class Controller : public QObject
{
	Q_OBJECT

public:
	explicit Controller();
	~Controller();
	void connectView(View *view);

signals:

public slots:

	void activateNext();

private:
	View *view_;
	Model *model_;
	
};

#endif // CONTROLLER_H