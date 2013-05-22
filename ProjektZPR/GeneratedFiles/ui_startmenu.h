/********************************************************************************
** Form generated from reading UI file 'startmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTMENU_H
#define UI_STARTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartMenu
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *coursesList;
    QHBoxLayout *horizontalLayout;
    QPushButton *start;
    QPushButton *delete_2;

    void setupUi(QWidget *StartMenu)
    {
        if (StartMenu->objectName().isEmpty())
            StartMenu->setObjectName(QStringLiteral("StartMenu"));
        StartMenu->resize(306, 299);
        label = new QLabel(StartMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 81, 21));
        widget = new QWidget(StartMenu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 41, 258, 225));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        coursesList = new QListWidget(widget);
        coursesList->setObjectName(QStringLiteral("coursesList"));

        verticalLayout->addWidget(coursesList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        start = new QPushButton(widget);
        start->setObjectName(QStringLiteral("start"));

        horizontalLayout->addWidget(start);

        delete_2 = new QPushButton(widget);
        delete_2->setObjectName(QStringLiteral("delete_2"));

        horizontalLayout->addWidget(delete_2);


        verticalLayout->addLayout(horizontalLayout);

        label->raise();
        coursesList->raise();
        delete_2->raise();
        start->raise();
        start->raise();

        retranslateUi(StartMenu);

        QMetaObject::connectSlotsByName(StartMenu);
    } // setupUi

    void retranslateUi(QWidget *StartMenu)
    {
        StartMenu->setWindowTitle(QApplication::translate("StartMenu", "StartMenu", 0));
        label->setText(QApplication::translate("StartMenu", "Dost\304\231pne Kursy", 0));
        start->setText(QApplication::translate("StartMenu", "Wybierz", 0));
        delete_2->setText(QApplication::translate("StartMenu", "Usun", 0));
    } // retranslateUi

};

namespace Ui {
    class StartMenu: public Ui_StartMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTMENU_H
