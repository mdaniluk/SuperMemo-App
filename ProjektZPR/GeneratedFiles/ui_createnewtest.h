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
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QTabWidget *tabWidget;
    QWidget *Open;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_2;
    QWidget *Close;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_5;
    QGroupBox *groupBox_4;
    QRadioButton *radioButton_6;
    QGroupBox *groupBox;
    QRadioButton *radioButton_7;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *CreateNewTest)
    {
        if (CreateNewTest->objectName().isEmpty())
            CreateNewTest->setObjectName(QStringLiteral("CreateNewTest"));
        CreateNewTest->resize(686, 470);
        label = new QLabel(CreateNewTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 11, 66, 20));
        QFont font;
        font.setFamily(QStringLiteral("Cambria"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        textEdit = new QTextEdit(CreateNewTest);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(93, 10, 441, 51));
        pushButton_3 = new QPushButton(CreateNewTest);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(570, 20, 75, 23));
        tabWidget = new QTabWidget(CreateNewTest);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(100, 110, 441, 201));
        Open = new QWidget();
        Open->setObjectName(QStringLiteral("Open"));
        verticalLayout = new QVBoxLayout(Open);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit_2 = new QTextEdit(Open);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        verticalLayout->addWidget(textEdit_2);

        tabWidget->addTab(Open, QString());
        Close = new QWidget();
        Close->setObjectName(QStringLiteral("Close"));
        label_3 = new QLabel(Close);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 109, 125, 93));
        widget = new QWidget(Close);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 0, 371, 171));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit_4 = new QTextEdit(widget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        gridLayout_2->addWidget(textEdit_4, 0, 0, 1, 1);

        textEdit_5 = new QTextEdit(widget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));

        gridLayout_2->addWidget(textEdit_5, 1, 0, 1, 1);

        textEdit_6 = new QTextEdit(widget);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));

        gridLayout_2->addWidget(textEdit_6, 2, 0, 1, 1);

        textEdit_7 = new QTextEdit(widget);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));

        gridLayout_2->addWidget(textEdit_7, 3, 0, 1, 1);

        widget1 = new QWidget(Close);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 0, 55, 171));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(widget1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(widget1);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 10, 33, 17));

        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(widget1);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        radioButton_6 = new QRadioButton(groupBox_4);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(10, 13, 32, 17));
        groupBox_2->raise();
        radioButton_6->raise();

        verticalLayout_3->addWidget(groupBox_4);

        groupBox = new QGroupBox(widget1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        radioButton_7 = new QRadioButton(groupBox);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(10, 13, 33, 17));

        verticalLayout_3->addWidget(groupBox);

        tabWidget->addTab(Close, QString());
        label_3->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        groupBox->raise();
        groupBox_2->raise();
        radioButton_6->raise();
        textEdit_4->raise();
        textEdit_5->raise();
        textEdit_6->raise();
        textEdit_7->raise();
        label_2 = new QLabel(CreateNewTest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 120, 66, 20));
        label_2->setFont(font);
        pushButton_4 = new QPushButton(CreateNewTest);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 180, 75, 23));
        widget2 = new QWidget(CreateNewTest);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(widget2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget3 = new QWidget(CreateNewTest);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(140, 320, 361, 51));
        horizontalLayout = new QHBoxLayout(widget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton->raise();
        label->raise();
        textEdit->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        tabWidget->raise();
        label_2->raise();
        pushButton_4->raise();
        textEdit_4->raise();
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, textEdit);

        retranslateUi(CreateNewTest);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CreateNewTest);
    } // setupUi

    void retranslateUi(QWidget *CreateNewTest)
    {
        CreateNewTest->setWindowTitle(QApplication::translate("CreateNewTest", "CreateNewTest", 0));
        label->setText(QApplication::translate("CreateNewTest", "Question", 0));
        textEdit->setHtml(QApplication::translate("CreateNewTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0));
        pushButton_3->setText(QApplication::translate("CreateNewTest", "Save Course", 0));
        tabWidget->setTabText(tabWidget->indexOf(Open), QApplication::translate("CreateNewTest", "Open", 0));
        label_3->setText(QString());
        groupBox_2->setTitle(QString());
        radioButton->setText(QApplication::translate("CreateNewTest", "a)", 0));
        groupBox_3->setTitle(QString());
        radioButton_5->setText(QApplication::translate("CreateNewTest", "b)", 0));
        groupBox_4->setTitle(QString());
        radioButton_6->setText(QApplication::translate("CreateNewTest", "c)", 0));
        groupBox->setTitle(QString());
        radioButton_7->setText(QApplication::translate("CreateNewTest", "d)", 0));
        tabWidget->setTabText(tabWidget->indexOf(Close), QApplication::translate("CreateNewTest", "Close", 0));
        label_2->setText(QApplication::translate("CreateNewTest", "Answer", 0));
        pushButton_4->setText(QApplication::translate("CreateNewTest", "Help", 0));
        pushButton_2->setText(QApplication::translate("CreateNewTest", "Back", 0));
        pushButton->setText(QApplication::translate("CreateNewTest", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateNewTest: public Ui_CreateNewTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWTEST_H
