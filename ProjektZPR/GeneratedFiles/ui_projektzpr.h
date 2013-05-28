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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QAction *actionStop;
    QAction *actionQuit;
    QAction *actionNew_Course;
    QAction *actionStart;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *judge_button;
    QPushButton *answer_button;
    QPushButton *end_button;
    QProgressBar *progressBar;
    QLabel *latwe;
    QLabel *trudne;
    QSlider *verticalSlider;
    QLabel *answer;
    QLabel *question;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuCreate;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QStringLiteral("mainWindow"));
        mainWindow->resize(600, 400);
        actionStop = new QAction(mainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionQuit = new QAction(mainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionNew_Course = new QAction(mainWindow);
        actionNew_Course->setObjectName(QStringLiteral("actionNew_Course"));
        actionStart = new QAction(mainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        centralWidget = new QWidget(mainWindow);
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
        judge_button = new QPushButton(centralWidget);
        judge_button->setObjectName(QStringLiteral("judge_button"));
        judge_button->setGeometry(QRect(410, 300, 75, 23));
        answer_button = new QPushButton(centralWidget);
        answer_button->setObjectName(QStringLiteral("answer_button"));
        answer_button->setGeometry(QRect(490, 300, 75, 23));
        end_button = new QPushButton(centralWidget);
        end_button->setObjectName(QStringLiteral("end_button"));
        end_button->setGeometry(QRect(330, 300, 75, 23));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(20, 300, 301, 23));
        progressBar->setValue(24);
        latwe = new QLabel(centralWidget);
        latwe->setObjectName(QStringLiteral("latwe"));
        latwe->setGeometry(QRect(550, 20, 46, 13));
        trudne = new QLabel(centralWidget);
        trudne->setObjectName(QStringLiteral("trudne"));
        trudne->setGeometry(QRect(550, 280, 46, 13));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(560, 49, 20, 221));
        verticalSlider->setOrientation(Qt::Vertical);
        answer = new QLabel(centralWidget);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(50, 160, 501, 131));
        question = new QLabel(centralWidget);
        question->setObjectName(QStringLiteral("question"));
        question->setGeometry(QRect(50, 0, 501, 151));
        mainWindow->setCentralWidget(centralWidget);
        label->raise();
        label_2->raise();
        answer->raise();
        question->raise();
        judge_button->raise();
        answer_button->raise();
        end_button->raise();
        answer->raise();
        question->raise();
        question->raise();
        progressBar->raise();
        latwe->raise();
        trudne->raise();
        verticalSlider->raise();
        menuBar = new QMenuBar(mainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuCreate = new QMenu(menuBar);
        menuCreate->setObjectName(QStringLiteral("menuCreate"));
        mainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuCreate->menuAction());
        menuFile->addAction(actionStart);
        menuFile->addAction(actionStop);
        menuFile->addAction(actionQuit);
        menuCreate->addAction(actionNew_Course);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "ProjektZPR", 0));
        actionStop->setText(QApplication::translate("mainWindow", "Stop", 0));
        actionQuit->setText(QApplication::translate("mainWindow", "Quit", 0));
        actionNew_Course->setText(QApplication::translate("mainWindow", "New Course", 0));
        actionStart->setText(QApplication::translate("mainWindow", "Start", 0));
        label->setText(QApplication::translate("mainWindow", "Witaj w Supermemo ", 0));
        label_2->setText(QApplication::translate("mainWindow", "Autors: Micha\305\202 Daniluk & Piotr Ma\305\202ecki", 0));
        judge_button->setText(QApplication::translate("mainWindow", "Judge", 0));
        answer_button->setText(QApplication::translate("mainWindow", "Answer", 0));
        end_button->setText(QApplication::translate("mainWindow", "End", 0));
        latwe->setText(QApplication::translate("mainWindow", "\305\201atwe", 0));
        trudne->setText(QApplication::translate("mainWindow", "Trudne", 0));
        answer->setText(QString());
        question->setText(QString());
        menuFile->setTitle(QApplication::translate("mainWindow", "File", 0));
        menuCreate->setTitle(QApplication::translate("mainWindow", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKTZPR_H
