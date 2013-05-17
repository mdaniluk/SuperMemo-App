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

class Ui_CreateNewTest
{
public:
    QLabel *label;
    QTextEdit *questionEdit;
    QPushButton *save;
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
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QComboBox *aValue;
    QComboBox *bValue;
    QComboBox *cValue;
    QComboBox *dValue;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QTextEdit *answerCloseAEdit;
    QTextEdit *answerCloseBEdit;
    QTextEdit *answerCloseCEdit;
    QTextEdit *answerCloseDEdit;
    QLabel *label_2;
    QPushButton *help;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QWidget *layoutWidget4;
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
        tabs = new QTabWidget(CreateNewTest);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setGeometry(QRect(90, 160, 461, 231));
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
        QFont font1;
        font1.setFamily(QStringLiteral("Cambria"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        layoutWidget1 = new QWidget(close);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(400, 0, 52, 211));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        aValue = new QComboBox(layoutWidget1);
        aValue->setObjectName(QStringLiteral("aValue"));

        gridLayout_3->addWidget(aValue, 0, 0, 1, 1);

        bValue = new QComboBox(layoutWidget1);
        bValue->setObjectName(QStringLiteral("bValue"));

        gridLayout_3->addWidget(bValue, 1, 0, 1, 1);

        cValue = new QComboBox(layoutWidget1);
        cValue->setObjectName(QStringLiteral("cValue"));

        gridLayout_3->addWidget(cValue, 2, 0, 1, 1);

        dValue = new QComboBox(layoutWidget1);
        dValue->setObjectName(QStringLiteral("dValue"));

        gridLayout_3->addWidget(dValue, 3, 0, 1, 1);

        layoutWidget2 = new QWidget(close);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 10, 331, 191));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        answerCloseAEdit = new QTextEdit(layoutWidget2);
        answerCloseAEdit->setObjectName(QStringLiteral("answerCloseAEdit"));

        gridLayout_2->addWidget(answerCloseAEdit, 0, 0, 1, 1);

        answerCloseBEdit = new QTextEdit(layoutWidget2);
        answerCloseBEdit->setObjectName(QStringLiteral("answerCloseBEdit"));

        gridLayout_2->addWidget(answerCloseBEdit, 1, 0, 1, 1);

        answerCloseCEdit = new QTextEdit(layoutWidget2);
        answerCloseCEdit->setObjectName(QStringLiteral("answerCloseCEdit"));

        gridLayout_2->addWidget(answerCloseCEdit, 2, 0, 1, 1);

        answerCloseDEdit = new QTextEdit(layoutWidget2);
        answerCloseDEdit->setObjectName(QStringLiteral("answerCloseDEdit"));

        gridLayout_2->addWidget(answerCloseDEdit, 3, 0, 1, 1);

        tabs->addTab(close, QString());
        label_2 = new QLabel(CreateNewTest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 180, 66, 20));
        label_2->setFont(font);
        help = new QPushButton(CreateNewTest);
        help->setObjectName(QStringLiteral("help"));
        help->setGeometry(QRect(570, 210, 75, 23));
        layoutWidget3 = new QWidget(CreateNewTest);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        layoutWidget4 = new QWidget(CreateNewTest);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(140, 410, 361, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(layoutWidget4);
        back->setObjectName(QStringLiteral("back"));

        horizontalLayout->addWidget(back);

        next = new QPushButton(layoutWidget4);
        next->setObjectName(QStringLiteral("next"));

        horizontalLayout->addWidget(next);

        questionNumber = new QLabel(CreateNewTest);
        questionNumber->setObjectName(QStringLiteral("questionNumber"));
        questionNumber->setGeometry(QRect(300, 10, 91, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Cambria"));
        font2.setPointSize(33);
        font2.setBold(true);
        font2.setWeight(75);
        questionNumber->setFont(font2);
        layoutWidget->raise();
        layoutWidget->raise();
        label->raise();
        questionEdit->raise();
        save->raise();
        tabs->raise();
        label_2->raise();
        help->raise();
        questionNumber->raise();
        QWidget::setTabOrder(next, back);
        QWidget::setTabOrder(back, save);
        QWidget::setTabOrder(save, questionEdit);

        retranslateUi(CreateNewTest);
        QObject::connect(next, SIGNAL(clicked()), CreateNewTest, SLOT(nextQuestion()));
        QObject::connect(back, SIGNAL(clicked()), CreateNewTest, SLOT(backQuestion()));
        QObject::connect(tabs, SIGNAL(currentChanged(int)), CreateNewTest, SLOT(currentChangedSlot()));
        QObject::connect(save, SIGNAL(clicked()), CreateNewTest, SLOT(saveCourse()));

        tabs->setCurrentIndex(1);


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
        tabs->setTabText(tabs->indexOf(open), QApplication::translate("CreateNewTest", "Open", 0));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("CreateNewTest", "a)", 0));
        label_5->setText(QApplication::translate("CreateNewTest", "b)", 0));
        label_6->setText(QApplication::translate("CreateNewTest", "c)", 0));
        label_7->setText(QApplication::translate("CreateNewTest", "d)", 0));
        aValue->clear();
        aValue->insertItems(0, QStringList()
         << QApplication::translate("CreateNewTest", "True", 0)
         << QApplication::translate("CreateNewTest", "False", 0)
        );
        aValue->setCurrentText(QApplication::translate("CreateNewTest", "True", 0));
        bValue->clear();
        bValue->insertItems(0, QStringList()
         << QApplication::translate("CreateNewTest", "True", 0)
         << QApplication::translate("CreateNewTest", "False", 0)
        );
        cValue->clear();
        cValue->insertItems(0, QStringList()
         << QApplication::translate("CreateNewTest", "True", 0)
         << QApplication::translate("CreateNewTest", "False", 0)
        );
        dValue->clear();
        dValue->insertItems(0, QStringList()
         << QApplication::translate("CreateNewTest", "True", 0)
         << QApplication::translate("CreateNewTest", "False", 0)
        );
        tabs->setTabText(tabs->indexOf(close), QApplication::translate("CreateNewTest", "Close", 0));
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
