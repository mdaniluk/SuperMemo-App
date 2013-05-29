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
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QVBoxLayout>
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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *aLabel;
    QLabel *bLabel;
    QLabel *cLabel;
    QLabel *dLabel;
    QLabel *correctAnswer;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *answerEditCloseA;
    QLabel *answerEditCloseC;
    QLabel *answerEditCloseD;
    QLabel *answerEditCloseB;
    QLabel *valueJudge;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxA;
    QCheckBox *checkBoxB;
    QCheckBox *checkBoxC;
    QCheckBox *checkBoxD;
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
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 110, 20, 131));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        aLabel = new QLabel(layoutWidget);
        aLabel->setObjectName(QStringLiteral("aLabel"));
        QFont font2;
        font2.setFamily(QStringLiteral("Cambria"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        aLabel->setFont(font2);

        gridLayout->addWidget(aLabel, 0, 0, 1, 1);

        bLabel = new QLabel(layoutWidget);
        bLabel->setObjectName(QStringLiteral("bLabel"));
        bLabel->setFont(font2);

        gridLayout->addWidget(bLabel, 1, 0, 1, 1);

        cLabel = new QLabel(layoutWidget);
        cLabel->setObjectName(QStringLiteral("cLabel"));
        cLabel->setFont(font2);

        gridLayout->addWidget(cLabel, 2, 0, 1, 1);

        dLabel = new QLabel(layoutWidget);
        dLabel->setObjectName(QStringLiteral("dLabel"));
        dLabel->setFont(font2);

        gridLayout->addWidget(dLabel, 3, 0, 1, 1);

        correctAnswer = new QLabel(centralWidget);
        correctAnswer->setObjectName(QStringLiteral("correctAnswer"));
        correctAnswer->setGeometry(QRect(65, 90, 441, 41));
        correctAnswer->setFont(font1);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 111, 441, 131));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        answerEditCloseA = new QLabel(layoutWidget1);
        answerEditCloseA->setObjectName(QStringLiteral("answerEditCloseA"));

        gridLayout_3->addWidget(answerEditCloseA, 0, 0, 1, 1);

        answerEditCloseC = new QLabel(layoutWidget1);
        answerEditCloseC->setObjectName(QStringLiteral("answerEditCloseC"));

        gridLayout_3->addWidget(answerEditCloseC, 2, 0, 1, 1);

        answerEditCloseD = new QLabel(layoutWidget1);
        answerEditCloseD->setObjectName(QStringLiteral("answerEditCloseD"));

        gridLayout_3->addWidget(answerEditCloseD, 3, 0, 1, 1);

        answerEditCloseB = new QLabel(layoutWidget1);
        answerEditCloseB->setObjectName(QStringLiteral("answerEditCloseB"));

        gridLayout_3->addWidget(answerEditCloseB, 1, 0, 1, 1);

        valueJudge = new QLabel(centralWidget);
        valueJudge->setObjectName(QStringLiteral("valueJudge"));
        valueJudge->setGeometry(QRect(561, 280, 21, 16));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 102, 16, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxA = new QCheckBox(widget);
        checkBoxA->setObjectName(QStringLiteral("checkBoxA"));

        verticalLayout->addWidget(checkBoxA);

        checkBoxB = new QCheckBox(widget);
        checkBoxB->setObjectName(QStringLiteral("checkBoxB"));

        verticalLayout->addWidget(checkBoxB);

        checkBoxC = new QCheckBox(widget);
        checkBoxC->setObjectName(QStringLiteral("checkBoxC"));

        verticalLayout->addWidget(checkBoxC);

        checkBoxD = new QCheckBox(widget);
        checkBoxD->setObjectName(QStringLiteral("checkBoxD"));

        verticalLayout->addWidget(checkBoxD);

        mainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
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
        checkBoxB->raise();
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
        aLabel->setText(QApplication::translate("mainWindow", "a)", 0));
        bLabel->setText(QApplication::translate("mainWindow", "b)", 0));
        cLabel->setText(QApplication::translate("mainWindow", "c)", 0));
        dLabel->setText(QApplication::translate("mainWindow", "d)", 0));
        correctAnswer->setText(QString());
        answerEditCloseA->setText(QString());
        answerEditCloseC->setText(QString());
        answerEditCloseD->setText(QString());
        answerEditCloseB->setText(QString());
        valueJudge->setText(QString());
        checkBoxA->setText(QString());
        checkBoxB->setText(QString());
        checkBoxC->setText(QString());
        checkBoxD->setText(QString());
        menuFile->setTitle(QApplication::translate("mainWindow", "File", 0));
        menuCreate->setTitle(QApplication::translate("mainWindow", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKTZPR_H
