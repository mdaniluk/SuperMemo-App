/********************************************************************************
** Form generated from reading UI file 'projektzpr.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJEKTZPR_H
#define UI_PROJEKTZPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjektZPRClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProjektZPRClass)
    {
        if (ProjektZPRClass->objectName().isEmpty())
            ProjektZPRClass->setObjectName(QStringLiteral("ProjektZPRClass"));
        ProjektZPRClass->resize(600, 400);
        menuBar = new QMenuBar(ProjektZPRClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ProjektZPRClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProjektZPRClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ProjektZPRClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ProjektZPRClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ProjektZPRClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ProjektZPRClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ProjektZPRClass->setStatusBar(statusBar);

        retranslateUi(ProjektZPRClass);

        QMetaObject::connectSlotsByName(ProjektZPRClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProjektZPRClass)
    {
        ProjektZPRClass->setWindowTitle(QApplication::translate("ProjektZPRClass", "ProjektZPR", 0));
    } // retranslateUi

};

namespace Ui {
    class ProjektZPRClass: public Ui_ProjektZPRClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKTZPR_H
