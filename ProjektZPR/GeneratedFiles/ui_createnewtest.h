/********************************************************************************
** Form generated from reading UI file 'createnewtest.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWTEST_H
#define UI_CREATENEWTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateNewTest
{
public:
    QLabel *label;
    QTextEdit *questionEdit;
    QPushButton *save;
    QTabWidget *tabWidget;
    QWidget *Open;
    QVBoxLayout *verticalLayout;
    QTextEdit *answerOpenEdit;
    QWidget *Close;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QRadioButton *rbA;
    QGroupBox *groupBox_3;
    QRadioButton *rbB;
    QGroupBox *groupBox_4;
    QRadioButton *rbC;
    QGroupBox *groupBox;
    QRadioButton *rbD;
    QGridLayout *gridLayout_2;
    QTextEdit *answerCloseAEdit;
    QTextEdit *answerCloseBEdit;
    QTextEdit *answerCloseCEdit;
    QTextEdit *answerCloseDEdit;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *help;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *next;
    QLabel *questionNumber;

    void setupUi(QWidget *CreateNewTest)
    {
        if (CreateNewTest->objectName().isEmpty())
            CreateNewTest->setObjectName(QStringLiteral("CreateNewTest"));
        CreateNewTest->resize(662, 481);
        label = new QLabel(CreateNewTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 66, 20));
        QFont font;
        font.setFamily(QStringLiteral("Cambria"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        questionEdit = new QTextEdit(CreateNewTest);
        questionEdit->setObjectName(QStringLiteral("questionEdit"));
        questionEdit->setGeometry(QRect(90, 70, 441, 51));
        save = new QPushButton(CreateNewTest);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(570, 90, 75, 23));
        tabWidget = new QTabWidget(CreateNewTest);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(90, 160, 461, 231));
        Open = new QWidget();
        Open->setObjectName(QStringLiteral("Open"));
        verticalLayout = new QVBoxLayout(Open);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        answerOpenEdit = new QTextEdit(Open);
        answerOpenEdit->setObjectName(QStringLiteral("answerOpenEdit"));

        verticalLayout->addWidget(answerOpenEdit);

        tabWidget->addTab(Open, QString());
        Close = new QWidget();
        Close->setObjectName(QStringLiteral("Close"));
        gridLayout_3 = new QGridLayout(Close);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_2 = new QGroupBox(Close);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        rbA = new QRadioButton(groupBox_2);
        rbA->setObjectName(QStringLiteral("rbA"));

        gridLayout->addWidget(rbA, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(Close);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        rbB = new QRadioButton(groupBox_3);
        rbB->setObjectName(QStringLiteral("rbB"));
        rbB->setGeometry(QRect(10, 10, 33, 17));

        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(Close);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        rbC = new QRadioButton(groupBox_4);
        rbC->setObjectName(QStringLiteral("rbC"));
        rbC->setGeometry(QRect(10, 13, 32, 17));

        verticalLayout_3->addWidget(groupBox_4);

        groupBox = new QGroupBox(Close);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        rbD = new QRadioButton(groupBox);
        rbD->setObjectName(QStringLiteral("rbD"));
        rbD->setGeometry(QRect(10, 13, 33, 17));

        verticalLayout_3->addWidget(groupBox);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 2, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        answerCloseAEdit = new QTextEdit(Close);
        answerCloseAEdit->setObjectName(QStringLiteral("answerCloseAEdit"));

        gridLayout_2->addWidget(answerCloseAEdit, 0, 0, 1, 1);

        answerCloseBEdit = new QTextEdit(Close);
        answerCloseBEdit->setObjectName(QStringLiteral("answerCloseBEdit"));

        gridLayout_2->addWidget(answerCloseBEdit, 1, 0, 1, 1);

        answerCloseCEdit = new QTextEdit(Close);
        answerCloseCEdit->setObjectName(QStringLiteral("answerCloseCEdit"));

        gridLayout_2->addWidget(answerCloseCEdit, 2, 0, 1, 1);

        answerCloseDEdit = new QTextEdit(Close);
        answerCloseDEdit->setObjectName(QStringLiteral("answerCloseDEdit"));

        gridLayout_2->addWidget(answerCloseDEdit, 3, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 2, 2);

        label_3 = new QLabel(Close);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 1, 2, 1, 1);

        tabWidget->addTab(Close, QString());
        label_2 = new QLabel(CreateNewTest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 180, 66, 20));
        label_2->setFont(font);
        help = new QPushButton(CreateNewTest);
        help->setObjectName(QStringLiteral("help"));
        help->setGeometry(QRect(570, 210, 75, 23));
        layoutWidget = new QWidget(CreateNewTest);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(CreateNewTest);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(140, 410, 361, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(layoutWidget1);
        back->setObjectName(QStringLiteral("back"));

        horizontalLayout->addWidget(back);

        next = new QPushButton(layoutWidget1);
        next->setObjectName(QStringLiteral("next"));

        horizontalLayout->addWidget(next);

        questionNumber = new QLabel(CreateNewTest);
        questionNumber->setObjectName(QStringLiteral("questionNumber"));
        questionNumber->setGeometry(QRect(300, 10, 91, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Cambria"));
        font1.setPointSize(33);
        font1.setBold(true);
        font1.setWeight(75);
        questionNumber->setFont(font1);
        layoutWidget->raise();
        layoutWidget->raise();
        label->raise();
        questionEdit->raise();
        save->raise();
        tabWidget->raise();
        label_2->raise();
        help->raise();
        questionNumber->raise();
        QWidget::setTabOrder(next, back);
        QWidget::setTabOrder(back, save);
        QWidget::setTabOrder(save, questionEdit);

        retranslateUi(CreateNewTest);
        QObject::connect(next, SIGNAL(clicked()), CreateNewTest, SLOT(nextQuestion()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CreateNewTest);
    } // setupUi

    void retranslateUi(QWidget *CreateNewTest)
    {
        CreateNewTest->setWindowTitle(QApplication::translate("CreateNewTest", "CreateNewTest", 0));
        label->setText(QApplication::translate("CreateNewTest", "Question", 0));
        questionEdit->setHtml(QApplication::translate("CreateNewTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0));
        save->setText(QApplication::translate("CreateNewTest", "Save Course", 0));
        tabWidget->setTabText(tabWidget->indexOf(Open), QApplication::translate("CreateNewTest", "Open", 0));
        groupBox_2->setTitle(QString());
        rbA->setText(QApplication::translate("CreateNewTest", "a)", 0));
        groupBox_3->setTitle(QString());
        rbB->setText(QApplication::translate("CreateNewTest", "b)", 0));
        groupBox_4->setTitle(QString());
        rbC->setText(QApplication::translate("CreateNewTest", "c)", 0));
        groupBox->setTitle(QString());
        rbD->setText(QApplication::translate("CreateNewTest", "d)", 0));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Close), QApplication::translate("CreateNewTest", "Close", 0));
        label_2->setText(QApplication::translate("CreateNewTest", "Answer", 0));
        help->setText(QApplication::translate("CreateNewTest", "Help", 0));
        back->setText(QApplication::translate("CreateNewTest", "Back", 0));
        next->setText(QApplication::translate("CreateNewTest", "Next", 0));
        questionNumber->setText(QApplication::translate("CreateNewTest", "1", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateNewTest: public Ui_CreateNewTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWTEST_H
