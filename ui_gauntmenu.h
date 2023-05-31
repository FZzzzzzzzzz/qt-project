/********************************************************************************
** Form generated from reading UI file 'gauntmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAUNTMENU_H
#define UI_GAUNTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GauntMenu
{
public:
    QFrame *frame;
    QPushButton *btnGauntMenu;
    QPushButton *SunGem;

    void setupUi(QWidget *GauntMenu)
    {
        if (GauntMenu->objectName().isEmpty())
            GauntMenu->setObjectName("GauntMenu");
        GauntMenu->resize(640, 480);
        GauntMenu->setMinimumSize(QSize(640, 480));
        GauntMenu->setMaximumSize(QSize(640, 480));
        frame = new QFrame(GauntMenu);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 641, 481));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/processed/gauntscreen.jpg);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btnGauntMenu = new QPushButton(frame);
        btnGauntMenu->setObjectName("btnGauntMenu");
        btnGauntMenu->setGeometry(QRect(10, 420, 80, 18));
        SunGem = new QPushButton(frame);
        SunGem->setObjectName("SunGem");
        SunGem->setGeometry(QRect(508, 70, 80, 18));

        retranslateUi(GauntMenu);

        QMetaObject::connectSlotsByName(GauntMenu);
    } // setupUi

    void retranslateUi(QWidget *GauntMenu)
    {
        GauntMenu->setWindowTitle(QCoreApplication::translate("GauntMenu", "Form", nullptr));
        btnGauntMenu->setText(QString());
        SunGem->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GauntMenu: public Ui_GauntMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAUNTMENU_H
