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
    QPushButton *judge_button;
    QPushButton *answer_button;
    QPushButton *end_button;
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
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *answerEditCloseA;
    QLabel *answerEditCloseC;
    QLabel *answerEditCloseD;
    QLabel *answerEditCloseB;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
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
        question = new QLabel(centralWidget);
        question->setObjectName(QStringLiteral("question"));
        question->setGeometry(QRect(50, 0, 501, 151));
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
        QFont font1;
        font1.setFamily(QStringLiteral("Cambria"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        aLabel->setFont(font1);

        gridLayout->addWidget(aLabel, 0, 0, 1, 1);

        bLabel = new QLabel(layoutWidget);
        bLabel->setObjectName(QStringLiteral("bLabel"));
        bLabel->setFont(font1);

        gridLayout->addWidget(bLabel, 1, 0, 1, 1);

        cLabel = new QLabel(layoutWidget);
        cLabel->setObjectName(QStringLiteral("cLabel"));
        cLabel->setFont(font1);

        gridLayout->addWidget(cLabel, 2, 0, 1, 1);

        dLabel = new QLabel(layoutWidget);
        dLabel->setObjectName(QStringLiteral("dLabel"));
        dLabel->setFont(font1);

        gridLayout->addWidget(dLabel, 3, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 111, 441, 131));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        answerEditCloseA = new QLabel(widget);
        answerEditCloseA->setObjectName(QStringLiteral("answerEditCloseA"));

        gridLayout_3->addWidget(answerEditCloseA, 0, 0, 1, 1);

        answerEditCloseC = new QLabel(widget);
        answerEditCloseC->setObjectName(QStringLiteral("answerEditCloseC"));

        gridLayout_3->addWidget(answerEditCloseC, 2, 0, 1, 1);

        answerEditCloseD = new QLabel(widget);
        answerEditCloseD->setObjectName(QStringLiteral("answerEditCloseD"));

        gridLayout_3->addWidget(answerEditCloseD, 3, 0, 1, 1);

        answerEditCloseB = new QLabel(widget);
        answerEditCloseB->setObjectName(QStringLiteral("answerEditCloseB"));

        gridLayout_3->addWidget(answerEditCloseB, 1, 0, 1, 1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(41, 109, 20, 141));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBoxA = new QCheckBox(widget1);
        checkBoxA->setObjectName(QStringLiteral("checkBoxA"));

        gridLayout_2->addWidget(checkBoxA, 0, 0, 1, 1);

        checkBoxB = new QCheckBox(widget1);
        checkBoxB->setObjectName(QStringLiteral("checkBoxB"));

        gridLayout_2->addWidget(checkBoxB, 1, 0, 1, 1);

        checkBoxC = new QCheckBox(widget1);
        checkBoxC->setObjectName(QStringLiteral("checkBoxC"));

        gridLayout_2->addWidget(checkBoxC, 2, 0, 1, 1);

        checkBoxD = new QCheckBox(widget1);
        checkBoxD->setObjectName(QStringLiteral("checkBoxD"));

        gridLayout_2->addWidget(checkBoxD, 3, 0, 1, 1);

        mainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        labelWelcome->raise();
        labelAuthors->raise();
        judge_button->raise();
        answer_button->raise();
        end_button->raise();
        question->raise();
        progressBar->raise();
        latwe->raise();
        trudne->raise();
        verticalSlider->raise();
        answerOpenEdit->raise();
        nextButton->raise();
        backButton->raise();
        answerEditCloseA->raise();
        answerEditCloseB->raise();
        answerEditCloseC->raise();
        answerEditCloseD->raise();
        checkBoxA->raise();
        checkBoxB->raise();
        checkBoxC->raise();
        checkBoxD->raise();
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
        judge_button->setText(QApplication::translate("mainWindow", "Judge", 0));
        answer_button->setText(QApplication::translate("mainWindow", "Answer", 0));
        end_button->setText(QApplication::translate("mainWindow", "End", 0));
        latwe->setText(QApplication::translate("mainWindow", "\305\201atwe", 0));
        trudne->setText(QApplication::translate("mainWindow", "Trudne", 0));
        question->setText(QString());
        nextButton->setText(QApplication::translate("mainWindow", "Next", 0));
        backButton->setText(QApplication::translate("mainWindow", "Back", 0));
        aLabel->setText(QApplication::translate("mainWindow", "a)", 0));
        bLabel->setText(QApplication::translate("mainWindow", "b)", 0));
        cLabel->setText(QApplication::translate("mainWindow", "c)", 0));
        dLabel->setText(QApplication::translate("mainWindow", "d)", 0));
        answerEditCloseA->setText(QString());
        answerEditCloseC->setText(QString());
        answerEditCloseD->setText(QString());
        answerEditCloseB->setText(QString());
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
