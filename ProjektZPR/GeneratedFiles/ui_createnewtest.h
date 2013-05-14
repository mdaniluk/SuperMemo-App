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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateNewTest
{
public:
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CreateNewTest)
    {
        if (CreateNewTest->objectName().isEmpty())
            CreateNewTest->setObjectName(QStringLiteral("CreateNewTest"));
        CreateNewTest->resize(400, 300);
        textEdit = new QTextEdit(CreateNewTest);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 30, 401, 71));
        textEdit_2 = new QTextEdit(CreateNewTest);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 150, 391, 81));
        pushButton = new QPushButton(CreateNewTest);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 240, 75, 23));
        widget = new QWidget(CreateNewTest);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 240, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(CreateNewTest);

        QMetaObject::connectSlotsByName(CreateNewTest);
    } // setupUi

    void retranslateUi(QWidget *CreateNewTest)
    {
        CreateNewTest->setWindowTitle(QApplication::translate("CreateNewTest", "CreateNewTest", 0));
        textEdit->setHtml(QApplication::translate("CreateNewTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Write your questiion</span></p></body></html>", 0));
        textEdit_2->setHtml(QApplication::translate("CreateNewTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Answer</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("CreateNewTest", "Next", 0));
        pushButton_2->setText(QApplication::translate("CreateNewTest", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateNewTest: public Ui_CreateNewTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWTEST_H
