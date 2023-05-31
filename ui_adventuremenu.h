/********************************************************************************
** Form generated from reading UI file 'adventuremenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVENTUREMENU_H
#define UI_ADVENTUREMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdventureMenu
{
public:
    QFrame *frame;
    QPushButton *advPlayButton;
    QPushButton *advMainMenuButton;
    QPushButton *btnA1;

    void setupUi(QWidget *AdventureMenu)
    {
        if (AdventureMenu->objectName().isEmpty())
            AdventureMenu->setObjectName("AdventureMenu");
        AdventureMenu->resize(640, 480);
        AdventureMenu->setMinimumSize(QSize(640, 480));
        AdventureMenu->setMaximumSize(QSize(640, 480));
        AdventureMenu->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(AdventureMenu);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 641, 481));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/processed/mmAdventureMenu_Fixed.png);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        advPlayButton = new QPushButton(frame);
        advPlayButton->setObjectName("advPlayButton");
        advPlayButton->setGeometry(QRect(544, 442, 81, 31));
        advMainMenuButton = new QPushButton(frame);
        advMainMenuButton->setObjectName("advMainMenuButton");
        advMainMenuButton->setGeometry(QRect(0, 436, 131, 31));
        btnA1 = new QPushButton(frame);
        btnA1->setObjectName("btnA1");
        btnA1->setGeometry(QRect(228, 300, 31, 18));

        retranslateUi(AdventureMenu);

        QMetaObject::connectSlotsByName(AdventureMenu);
    } // setupUi

    void retranslateUi(QWidget *AdventureMenu)
    {
        AdventureMenu->setWindowTitle(QCoreApplication::translate("AdventureMenu", "Form", nullptr));
        advPlayButton->setText(QString());
        advMainMenuButton->setText(QString());
        btnA1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdventureMenu: public Ui_AdventureMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVENTUREMENU_H
