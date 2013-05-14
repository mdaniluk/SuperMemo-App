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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
<<<<<<< HEAD
    QTextEdit *textEdit;
=======
    QPushButton *pushButton;
>>>>>>> danio
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
<<<<<<< HEAD
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(140, 160, 104, 71));
=======
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 160, 75, 23));
>>>>>>> danio
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
        QObject::connect(pushButton, SIGNAL(clicked()), ProjektZPRClass, SLOT(pushButtonTest()));
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
        pushButton->setText(QApplication::translate("ProjektZPRClass", "PushButton", 0));
        menuFile->setTitle(QApplication::translate("ProjektZPRClass", "File", 0));
        menuCreate->setTitle(QApplication::translate("ProjektZPRClass", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class ProjektZPRClass: public Ui_ProjektZPRClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKTZPR_H
