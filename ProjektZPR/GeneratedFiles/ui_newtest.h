/********************************************************************************
** Form generated from reading UI file 'newtest.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTEST_H
#define UI_NEWTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewTest
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *next;

    void setupUi(QWidget *NewTest)
    {
        if (NewTest->objectName().isEmpty())
            NewTest->setObjectName(QStringLiteral("NewTest"));
        NewTest->resize(400, 300);
        label = new QLabel(NewTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 90, 151, 111));
        layoutWidget = new QWidget(NewTest);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 210, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(layoutWidget);
        back->setObjectName(QStringLiteral("back"));

        horizontalLayout->addWidget(back);

        next = new QPushButton(layoutWidget);
        next->setObjectName(QStringLiteral("next"));

        horizontalLayout->addWidget(next);

        layoutWidget->raise();
        label->raise();

        retranslateUi(NewTest);
        QObject::connect(next, SIGNAL(clicked()), NewTest, SLOT(on_next_clicked()));
        QObject::connect(back, SIGNAL(clicked()), NewTest, SLOT(test()));

        QMetaObject::connectSlotsByName(NewTest);
    } // setupUi

    void retranslateUi(QWidget *NewTest)
    {
        NewTest->setWindowTitle(QApplication::translate("NewTest", "NewTest", 0));
        label->setText(QApplication::translate("NewTest", "TextLabel", 0));
        back->setText(QApplication::translate("NewTest", "Back", 0));
        next->setText(QApplication::translate("NewTest", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class NewTest: public Ui_NewTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTEST_H
