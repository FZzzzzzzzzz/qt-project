/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *btnAdventure;
    QPushButton *btnGauntlet;
    QPushButton *btnOptions;
    QPushButton *btnMoreGames;
    QPushButton *btnQuit;
    QLabel *eye_left;
    QLabel *eye_right;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(640, 480);
        Menu->setMinimumSize(QSize(640, 480));
        Menu->setMaximumSize(QSize(640, 480));
        Menu->setStyleSheet(QString::fromUtf8("background-image: url(:/images/mmscreen.jpg);"));
        btnAdventure = new QPushButton(Menu);
        btnAdventure->setObjectName("btnAdventure");
        btnAdventure->setGeometry(QRect(451, 62, 80, 18));
        btnGauntlet = new QPushButton(Menu);
        btnGauntlet->setObjectName("btnGauntlet");
        btnGauntlet->setGeometry(QRect(440, 151, 80, 18));
        btnOptions = new QPushButton(Menu);
        btnOptions->setObjectName("btnOptions");
        btnOptions->setGeometry(QRect(420, 234, 80, 21));
        btnMoreGames = new QPushButton(Menu);
        btnMoreGames->setObjectName("btnMoreGames");
        btnMoreGames->setGeometry(QRect(395, 306, 80, 21));
        btnQuit = new QPushButton(Menu);
        btnQuit->setObjectName("btnQuit");
        btnQuit->setGeometry(QRect(500, 313, 80, 21));
        eye_left = new QLabel(Menu);
        eye_left->setObjectName("eye_left");
        eye_left->setGeometry(QRect(210, 345, 31, 31));
        eye_right = new QLabel(Menu);
        eye_right->setObjectName("eye_right");
        eye_right->setGeometry(QRect(268, 335, 31, 31));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Form", nullptr));
        btnAdventure->setText(QString());
        btnGauntlet->setText(QString());
        btnOptions->setText(QString());
        btnMoreGames->setText(QString());
        btnQuit->setText(QString());
        eye_left->setText(QString());
        eye_right->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
