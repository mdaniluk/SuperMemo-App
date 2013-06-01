/********************************************************************************
** Form generated from reading UI file 'schedule.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULE_H
#define UI_SCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Schedule
{
public:
    QListWidget *coursesList;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listLater;

    void setupUi(QWidget *Schedule)
    {
        if (Schedule->objectName().isEmpty())
            Schedule->setObjectName(QStringLiteral("Schedule"));
        Schedule->resize(373, 400);
        coursesList = new QListWidget(Schedule);
        coursesList->setObjectName(QStringLiteral("coursesList"));
        coursesList->setGeometry(QRect(40, 50, 281, 91));
        label = new QLabel(Schedule);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 291, 31));
        label_2 = new QLabel(Schedule);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 140, 291, 31));
        listLater = new QListWidget(Schedule);
        listLater->setObjectName(QStringLiteral("listLater"));
        listLater->setGeometry(QRect(40, 170, 281, 192));

        retranslateUi(Schedule);

        QMetaObject::connectSlotsByName(Schedule);
    } // setupUi

    void retranslateUi(QWidget *Schedule)
    {
        Schedule->setWindowTitle(QApplication::translate("Schedule", "Schedule", 0));
        label->setText(QApplication::translate("Schedule", "This is list of courses, which you can continue today", 0));
        label_2->setText(QApplication::translate("Schedule", "This is list of courses, which you can continue later", 0));
    } // retranslateUi

};

namespace Ui {
    class Schedule: public Ui_Schedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULE_H
