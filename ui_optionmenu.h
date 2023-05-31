/********************************************************************************
** Form generated from reading UI file 'optionmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONMENU_H
#define UI_OPTIONMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionMenu
{
public:

    void setupUi(QWidget *OptionMenu)
    {
        if (OptionMenu->objectName().isEmpty())
            OptionMenu->setObjectName("OptionMenu");
        OptionMenu->resize(243, 242);
        OptionMenu->setMinimumSize(QSize(243, 242));
        OptionMenu->setMaximumSize(QSize(243, 242));
        OptionMenu->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(OptionMenu);

        QMetaObject::connectSlotsByName(OptionMenu);
    } // setupUi

    void retranslateUi(QWidget *OptionMenu)
    {
        OptionMenu->setWindowTitle(QCoreApplication::translate("OptionMenu", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionMenu: public Ui_OptionMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONMENU_H
