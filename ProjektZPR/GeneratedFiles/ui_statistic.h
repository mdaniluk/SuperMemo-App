/********************************************************************************
** Form generated from reading UI file 'statistic.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIC_H
#define UI_STATISTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Statistic
{
public:
    QLabel *labelStats;

    void setupUi(QWidget *Statistic)
    {
        if (Statistic->objectName().isEmpty())
            Statistic->setObjectName(QStringLiteral("Statistic"));
        Statistic->resize(400, 300);
        labelStats = new QLabel(Statistic);
        labelStats->setObjectName(QStringLiteral("labelStats"));
        labelStats->setGeometry(QRect(35, 32, 331, 221));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        labelStats->setFont(font);

        retranslateUi(Statistic);

        QMetaObject::connectSlotsByName(Statistic);
    } // setupUi

    void retranslateUi(QWidget *Statistic)
    {
        Statistic->setWindowTitle(QApplication::translate("Statistic", "statistic", 0));
        labelStats->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Statistic: public Ui_Statistic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIC_H
