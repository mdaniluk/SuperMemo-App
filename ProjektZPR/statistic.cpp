#include "statistic.h"

Statistic::Statistic(Controller *controller, View *parent): QDialog(parent), myView_(parent), myController_(controller)
{
	setAttribute(Qt::WA_DeleteOnClose, true);
	setupUi(this);
	qRegisterMetaType<vector<int>>("vector<int>");
	connect(myController_, SIGNAL(showStats(vector<int>) ), this, SLOT (showStatistic(vector<int> ) ) );
	show();
}

Statistic::~Statistic()
{

}
void Statistic::showStatistic(vector<int> marks){
	labelStats->clear();
	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0;
	for(int i = 0; i < marks.size(); i++){
		if(marks.at(i) == 0)
			zero++;
		if(marks.at(i) == 1)
			one++;
		if(marks.at(i) == 2)
			two++;
		if(marks.at(i) == 3)
			three++;
		if(marks.at(i) == 4)
			four++;
		if(marks.at(i) == 5)
			five++;
	}
	QString stats = "Statistic : \n";
	stats.append("Amount of answer on 5 : ");
	stats.append(QString::number(five) );
	stats.append("\n");
	stats.append("Amount of answer on 4 : ");
	stats.append(QString::number(four) );
	stats.append("\n");
	stats.append("Amount of answer on 3 : ");
	stats.append(QString::number(three) );
	stats.append("\n");
	stats.append("Amount of answer on 2 : ");
	stats.append(QString::number(two) );
	stats.append("\n");
	stats.append("Amount of answer on 1 : ");
	stats.append(QString::number(one) );
	stats.append("\n");
	stats.append("Amount of answer on 0 : ");
	stats.append(QString::number(zero) );
	stats.append("\n");
	labelStats->setText(stats);
	
}