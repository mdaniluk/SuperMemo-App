#ifndef STATISTIC_H
#define STATISTIC_H

#include <QDialog>
#include "ui_statistic.h"
#include "view.h"
#include "controller.h"
class Statistic : public QDialog,  public Ui::Statistic
{
	Q_OBJECT
public:
	Statistic(Controller *controller, View *parent = NULL);
	~Statistic();
public slots:
	void showStatistic(vector<int> );
private:
	View *myView_;
	Controller *myController_;
};

#endif // STATISTIC_H
