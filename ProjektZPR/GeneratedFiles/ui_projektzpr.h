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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjektZPRClass
{
public:
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionQuit;
    QAction *actionNew_Course;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuCreate;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProjektZPRClass)
    {
        if (ProjektZPRClass->objectName().isEmpty())
            ProjektZPRClass->setObjectName(QStringLiteral("ProjektZPRClass"));
        ProjektZPRClass->resize(600, 400);
        actionStart = new QAction(ProjektZPRClass);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionStop = new QAction(ProjektZPRClass);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionQuit = new QAction(ProjektZPRClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionNew_Course = new QAction(ProjektZPRClass);
        actionNew_Course->setObjectName(QStringLiteral("actionNew_Course"));
        centralWidget = new QWidget(ProjektZPRClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 0, 441, 131));
        QFont font;
        font.setFamily(QStringLiteral("Edwardian Script ITC"));
        font.setPointSize(52);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 330, 181, 21));
        ProjektZPRClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ProjektZPRClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuCreate = new QMenu(menuBar);
        menuCreate->setObjectName(QStringLiteral("menuCreate"));
        ProjektZPRClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProjektZPRClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ProjektZPRClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ProjektZPRClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ProjektZPRClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuCreate->menuAction());
        menuFile->addAction(actionStart);
        menuFile->addAction(actionStop);
        menuFile->addAction(actionQuit);
        menuCreate->addAction(actionNew_Course);

        retranslateUi(ProjektZPRClass);
        QObject::connect(actionQuit, SIGNAL(triggered()), ProjektZPRClass, SLOT(close()));
        QObject::connect(actionStart, SIGNAL(triggered()), ProjektZPRClass, SLOT(start()));
        QObject::connect(actionNew_Course, SIGNAL(triggered()), ProjektZPRClass, SLOT(newTest()));

        QMetaObject::connectSlotsByName(ProjektZPRClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProjektZPRClass)
    {
        ProjektZPRClass->setWindowTitle(QApplication::translate("ProjektZPRClass", "ProjektZPR", 0));
        actionStart->setText(QApplication::translate("ProjektZPRClass", "Start", 0));
        actionStop->setText(QApplication::translate("ProjektZPRClass", "Stop", 0));
        actionQuit->setText(QApplication::translate("ProjektZPRClass", "Quit", 0));
        actionNew_Course->setText(QApplication::translate("ProjektZPRClass", "New Course", 0));
        label->setText(QApplication::translate("ProjektZPRClass", "Witaj w Supermemo ", 0));
        label_2->setText(QApplication::translate("ProjektZPRClass", "Autors: Micha\305\202 Daniluk & Piotr Ma\305\202ecki", 0));
        menuFile->setTitle(QApplication::translate("ProjektZPRClass", "File", 0));
        menuCreate->setTitle(QApplication::translate("ProjektZPRClass", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class ProjektZPRClass: public Ui_ProjektZPRClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKTZPR_H
