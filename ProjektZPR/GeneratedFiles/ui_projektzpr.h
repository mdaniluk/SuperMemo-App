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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
    QLabel *labelWelcome;
    QLabel *labelAuthors;
    QPushButton *judgeButton;
    QPushButton *answerButton;
    QPushButton *endButton;
    QProgressBar *progressBar;
    QLabel *latwe;
    QLabel *trudne;
    QSlider *verticalSlider;
    QLabel *question;
    QTextEdit *answerOpenEdit;
    QPushButton *nextButton;
    QPushButton *backButton;
    QLabel *correctAnswer;
    QLabel *valueJudge;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *answerEditCloseA;
    QLabel *answerEditCloseC;
    QLabel *answerEditCloseD;
    QLabel *answerEditCloseB;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QPushButton *aButton;
    QPushButton *bButton;
    QPushButton *cButton;
    QPushButton *dButton;
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
        labelWelcome = new QLabel(centralWidget);
        labelWelcome->setObjectName(QStringLiteral("labelWelcome"));
        labelWelcome->setGeometry(QRect(90, 0, 441, 131));
        QFont font;
        font.setFamily(QStringLiteral("Edwardian Script ITC"));
        font.setPointSize(52);
        font.setBold(true);
        font.setWeight(75);
        labelWelcome->setFont(font);
        labelAuthors = new QLabel(centralWidget);
        labelAuthors->setObjectName(QStringLiteral("labelAuthors"));
        labelAuthors->setGeometry(QRect(400, 330, 181, 21));
        judgeButton = new QPushButton(centralWidget);
        judgeButton->setObjectName(QStringLiteral("judgeButton"));
        judgeButton->setGeometry(QRect(410, 300, 75, 23));
        answerButton = new QPushButton(centralWidget);
        answerButton->setObjectName(QStringLiteral("answerButton"));
        answerButton->setGeometry(QRect(490, 300, 75, 23));
        endButton = new QPushButton(centralWidget);
        endButton->setObjectName(QStringLiteral("endButton"));
        endButton->setGeometry(QRect(330, 300, 75, 23));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(20, 300, 301, 23));
        progressBar->setValue(24);
        latwe = new QLabel(centralWidget);
        latwe->setObjectName(QStringLiteral("latwe"));
        latwe->setGeometry(QRect(516, 45, 46, 13));
        trudne = new QLabel(centralWidget);
        trudne->setObjectName(QStringLiteral("trudne"));
        trudne->setGeometry(QRect(515, 255, 46, 13));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(560, 49, 20, 221));
        verticalSlider->setOrientation(Qt::Vertical);
        question = new QLabel(centralWidget);
        question->setObjectName(QStringLiteral("question"));
        question->setGeometry(QRect(50, -10, 491, 121));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        question->setFont(font1);
        answerOpenEdit = new QTextEdit(centralWidget);
        answerOpenEdit->setObjectName(QStringLiteral("answerOpenEdit"));
        answerOpenEdit->setGeometry(QRect(70, 140, 441, 111));
        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(330, 260, 151, 23));
        backButton = new QPushButton(centralWidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(110, 260, 156, 23));
        correctAnswer = new QLabel(centralWidget);
        correctAnswer->setObjectName(QStringLiteral("correctAnswer"));
        correctAnswer->setGeometry(QRect(65, 90, 441, 35));
        correctAnswer->setMaximumSize(QSize(16777215, 35));
        correctAnswer->setFont(font1);
        valueJudge = new QLabel(centralWidget);
        valueJudge->setObjectName(QStringLiteral("valueJudge"));
        valueJudge->setGeometry(QRect(561, 280, 21, 16));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(95, 99, 473, 151));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        answerEditCloseA = new QLabel(widget);
        answerEditCloseA->setObjectName(QStringLiteral("answerEditCloseA"));
        answerEditCloseA->setMinimumSize(QSize(471, 36));
        answerEditCloseA->setMaximumSize(QSize(471, 36));

        gridLayout_3->addWidget(answerEditCloseA, 0, 0, 1, 1);

        answerEditCloseC = new QLabel(widget);
        answerEditCloseC->setObjectName(QStringLiteral("answerEditCloseC"));
        answerEditCloseC->setMinimumSize(QSize(0, 36));
        answerEditCloseC->setMaximumSize(QSize(16777215, 36));

        gridLayout_3->addWidget(answerEditCloseC, 2, 0, 1, 1);

        answerEditCloseD = new QLabel(widget);
        answerEditCloseD->setObjectName(QStringLiteral("answerEditCloseD"));
        answerEditCloseD->setMinimumSize(QSize(0, 36));
        answerEditCloseD->setMaximumSize(QSize(16777215, 36));

        gridLayout_3->addWidget(answerEditCloseD, 3, 0, 1, 1);

        answerEditCloseB = new QLabel(widget);
        answerEditCloseB->setObjectName(QStringLiteral("answerEditCloseB"));
        answerEditCloseB->setMinimumSize(QSize(0, 36));
        answerEditCloseB->setMaximumSize(QSize(16777215, 36));

        gridLayout_3->addWidget(answerEditCloseB, 1, 0, 1, 1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(13, 96, 77, 161));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        aButton = new QPushButton(widget1);
        aButton->setObjectName(QStringLiteral("aButton"));
        aButton->setEnabled(true);
        aButton->setMaximumSize(QSize(75, 23));

        gridLayout->addWidget(aButton, 0, 0, 1, 1);

        bButton = new QPushButton(widget1);
        bButton->setObjectName(QStringLiteral("bButton"));

        gridLayout->addWidget(bButton, 1, 0, 1, 1);

        cButton = new QPushButton(widget1);
        cButton->setObjectName(QStringLiteral("cButton"));

        gridLayout->addWidget(cButton, 2, 0, 1, 1);

        dButton = new QPushButton(widget1);
        dButton->setObjectName(QStringLiteral("dButton"));

        gridLayout->addWidget(dButton, 3, 0, 1, 1);

        mainWindow->setCentralWidget(centralWidget);
        labelWelcome->raise();
        labelAuthors->raise();
        judgeButton->raise();
        answerButton->raise();
        endButton->raise();
        question->raise();
        progressBar->raise();
        latwe->raise();
        trudne->raise();
        verticalSlider->raise();
        answerOpenEdit->raise();
        nextButton->raise();
        backButton->raise();
        correctAnswer->raise();
        valueJudge->raise();
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
        labelWelcome->setText(QApplication::translate("mainWindow", "Witaj w Supermemo ", 0));
        labelAuthors->setText(QApplication::translate("mainWindow", "Autors: Micha\305\202 Daniluk & Piotr Ma\305\202ecki", 0));
        judgeButton->setText(QApplication::translate("mainWindow", "Judge", 0));
        answerButton->setText(QApplication::translate("mainWindow", "Answer", 0));
        endButton->setText(QApplication::translate("mainWindow", "End", 0));
        latwe->setText(QApplication::translate("mainWindow", "\305\201atwe", 0));
        trudne->setText(QApplication::translate("mainWindow", "Trudne", 0));
        question->setText(QString());
        nextButton->setText(QApplication::translate("mainWindow", "Next", 0));
        backButton->setText(QApplication::translate("mainWindow", "Back", 0));
        correctAnswer->setText(QString());
        valueJudge->setText(QString());
        answerEditCloseA->setText(QApplication::translate("mainWindow", "sa", 0));
        answerEditCloseC->setText(QString());
        answerEditCloseD->setText(QString());
        answerEditCloseB->setText(QString());
        aButton->setText(QApplication::translate("mainWindow", "A", 0));
        bButton->setText(QApplication::translate("mainWindow", "B", 0));
        cButton->setText(QApplication::translate("mainWindow", "C", 0));
        dButton->setText(QApplication::translate("mainWindow", "D", 0));
        menuFile->setTitle(QApplication::translate("mainWindow", "File", 0));
        menuCreate->setTitle(QApplication::translate("mainWindow", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKTZPR_H
