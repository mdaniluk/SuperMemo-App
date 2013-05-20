#ifndef NEWTEST_H
#define NEWTEST_H

#include <QDialog>
#include "view.h"
#include "ui_newtest.h"

class NewTestDialog : public QDialog, public Ui::NewTest
{
	Q_OBJECT

public:
	NewTestDialog(Controller *controller, View *parent= NULL);
	NewTestDialog();
	~NewTestDialog();

signals:

	void goBack();
	void goNext();

private slots:

	void on_next_clicked();
	void on_back_clicked();
public slots:
	void test();
private:
	Ui::NewTest ui;
	View * myView;
	Controller * myController;
};

#endif // NEWTEST_H
