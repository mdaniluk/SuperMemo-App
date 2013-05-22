/********************************************************************************
** Form generated from reading UI file 'createtest.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETEST_H
#define UI_CREATETEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateTest
{
public:
    QLabel *questionNumber;
    QTextEdit *questionEdit;
    QPushButton *save;
    QLabel *label;
    QTabWidget *tabs;
    QWidget *open;
    QVBoxLayout *verticalLayout;
    QTextEdit *answerOpenEdit;
    QWidget *close;
    QLabel *label_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QComboBox *aValue;
    QComboBox *bValue;
    QComboBox *cValue;
    QComboBox *dValue;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_2;
    QTextEdit *answerCloseAEdit;
    QTextEdit *answerCloseBEdit;
    QTextEdit *answerCloseCEdit;
    QTextEdit *answerCloseDEdit;
    QLabel *label_2;
    QPushButton *help;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *next;

    void setupUi(QWidget *CreateTest)
    {
        if (CreateTest->objectName().isEmpty())
            CreateTest->setObjectName(QStringLiteral("CreateTest"));
        CreateTest->resize(688, 431);
        questionNumber = new QLabel(CreateTest);
        questionNumber->setObjectName(QStringLiteral("questionNumber"));
        questionNumber->setGeometry(QRect(300, 10, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Cambria"));
        font.setPointSize(33);
        font.setBold(true);
        font.setWeight(75);
        questionNumber->setFont(font);
        questionEdit = new QTextEdit(CreateTest);
        questionEdit->setObjectName(QStringLiteral("questionEdit"));
        questionEdit->setGeometry(QRect(110, 60, 441, 51));
        save = new QPushButton(CreateTest);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(560, 60, 75, 23));
        label = new QLabel(CreateTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 66, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Cambria"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        tabs = new QTabWidget(CreateTest);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setGeometry(QRect(80, 110, 461, 231));
        open = new QWidget();
        open->setObjectName(QStringLiteral("open"));
        verticalLayout = new QVBoxLayout(open);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        answerOpenEdit = new QTextEdit(open);
        answerOpenEdit->setObjectName(QStringLiteral("answerOpenEdit"));

        verticalLayout->addWidget(answerOpenEdit);

        tabs->addTab(open, QString());
        close = new QWidget();
        close->setObjectName(QStringLiteral("close"));
        label_3 = new QLabel(close);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(304, 106, 16, 16));
        layoutWidget = new QWidget(close);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 31, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setFamily(QStringLiteral("Cambria"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        layoutWidget_2 = new QWidget(close);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(400, 0, 52, 211));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        aValue = new QComboBox(layoutWidget_2);
        aValue->setObjectName(QStringLiteral("aValue"));

        gridLayout_3->addWidget(aValue, 0, 0, 1, 1);

        bValue = new QComboBox(layoutWidget_2);
        bValue->setObjectName(QStringLiteral("bValue"));

        gridLayout_3->addWidget(bValue, 1, 0, 1, 1);

        cValue = new QComboBox(layoutWidget_2);
        cValue->setObjectName(QStringLiteral("cValue"));

        gridLayout_3->addWidget(cValue, 2, 0, 1, 1);

        dValue = new QComboBox(layoutWidget_2);
        dValue->setObjectName(QStringLiteral("dValue"));

        gridLayout_3->addWidget(dValue, 3, 0, 1, 1);

        layoutWidget_3 = new QWidget(close);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(60, 10, 331, 191));
        gridLayout_2 = new QGridLayout(layoutWidget_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        answerCloseAEdit = new QTextEdit(layoutWidget_3);
        answerCloseAEdit->setObjectName(QStringLiteral("answerCloseAEdit"));

        gridLayout_2->addWidget(answerCloseAEdit, 0, 0, 1, 1);

        answerCloseBEdit = new QTextEdit(layoutWidget_3);
        answerCloseBEdit->setObjectName(QStringLiteral("answerCloseBEdit"));

        gridLayout_2->addWidget(answerCloseBEdit, 1, 0, 1, 1);

        answerCloseCEdit = new QTextEdit(layoutWidget_3);
        answerCloseCEdit->setObjectName(QStringLiteral("answerCloseCEdit"));

        gridLayout_2->addWidget(answerCloseCEdit, 2, 0, 1, 1);

        answerCloseDEdit = new QTextEdit(layoutWidget_3);
        answerCloseDEdit->setObjectName(QStringLiteral("answerCloseDEdit"));

        gridLayout_2->addWidget(answerCloseDEdit, 3, 0, 1, 1);

        tabs->addTab(close, QString());
        label_2 = new QLabel(CreateTest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 140, 66, 20));
        label_2->setFont(font1);
        help = new QPushButton(CreateTest);
        help->setObjectName(QStringLiteral("help"));
        help->setGeometry(QRect(590, 160, 75, 23));
        layoutWidget_4 = new QWidget(CreateTest);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(130, 350, 361, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(layoutWidget_4);
        back->setObjectName(QStringLiteral("back"));

        horizontalLayout->addWidget(back);

        next = new QPushButton(layoutWidget_4);
        next->setObjectName(QStringLiteral("next"));

        horizontalLayout->addWidget(next);


        retranslateUi(CreateTest);

        tabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CreateTest);
    } // setupUi

    void retranslateUi(QWidget *CreateTest)
    {
        CreateTest->setWindowTitle(QApplication::translate("CreateTest", "CreateTest", 0));
        questionNumber->setText(QApplication::translate("CreateTest", "1", 0));
        questionEdit->setHtml(QApplication::translate("CreateTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0));
        save->setText(QApplication::translate("CreateTest", "Save Course", 0));
        label->setText(QApplication::translate("CreateTest", "Question", 0));
        tabs->setTabText(tabs->indexOf(open), QApplication::translate("CreateTest", "Open", 0));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("CreateTest", "a)", 0));
        label_5->setText(QApplication::translate("CreateTest", "b)", 0));
        label_6->setText(QApplication::translate("CreateTest", "c)", 0));
        label_7->setText(QApplication::translate("CreateTest", "d)", 0));
        aValue->clear();
        aValue->insertItems(0, QStringList()
         << QApplication::translate("CreateTest", "True", 0)
         << QApplication::translate("CreateTest", "False", 0)
        );
        aValue->setCurrentText(QApplication::translate("CreateTest", "True", 0));
        bValue->clear();
        bValue->insertItems(0, QStringList()
         << QApplication::translate("CreateTest", "True", 0)
         << QApplication::translate("CreateTest", "False", 0)
        );
        cValue->clear();
        cValue->insertItems(0, QStringList()
         << QApplication::translate("CreateTest", "True", 0)
         << QApplication::translate("CreateTest", "False", 0)
        );
        dValue->clear();
        dValue->insertItems(0, QStringList()
         << QApplication::translate("CreateTest", "True", 0)
         << QApplication::translate("CreateTest", "False", 0)
        );
        tabs->setTabText(tabs->indexOf(close), QApplication::translate("CreateTest", "Close", 0));
        label_2->setText(QApplication::translate("CreateTest", "Answer", 0));
        help->setText(QApplication::translate("CreateTest", "Help", 0));
        back->setText(QApplication::translate("CreateTest", "Back", 0));
        next->setText(QApplication::translate("CreateTest", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateTest: public Ui_CreateTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETEST_H
