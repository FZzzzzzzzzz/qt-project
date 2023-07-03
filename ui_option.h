/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION_H
#define UI_OPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Option
{
public:
    QWidget *frame;
    QPushButton *btnMenu;

    void setupUi(QWidget *Option)
    {
        if (Option->objectName().isEmpty())
            Option->setObjectName("Option");
        Option->resize(400, 300);
        Option->setStyleSheet(QString::fromUtf8(""));
        frame = new QWidget(Option);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-20, 0, 421, 311));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/processed/OptionBox.png);}"));
        btnMenu = new QPushButton(frame);
        btnMenu->setObjectName("btnMenu");
        btnMenu->setGeometry(QRect(250, 210, 91, 31));
        btnMenu->setStyleSheet(QString::fromUtf8("border-image: url(:/processed/btnMenubar_1.jpg);"));

        retranslateUi(Option);

        QMetaObject::connectSlotsByName(Option);
    } // setupUi

    void retranslateUi(QWidget *Option)
    {
        Option->setWindowTitle(QCoreApplication::translate("Option", "Form", nullptr));
        btnMenu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Option: public Ui_Option {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_H
