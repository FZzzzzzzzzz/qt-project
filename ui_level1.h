/********************************************************************************
** Form generated from reading UI file 'level1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVEL1_H
#define UI_LEVEL1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_level1
{
public:
    QFrame *frame1;
    QFrame *frame_2;
    QPushButton *btnMenubar;

    void setupUi(QWidget *level1)
    {
        if (level1->objectName().isEmpty())
            level1->setObjectName("level1");
        level1->resize(640, 480);
        level1->setMinimumSize(QSize(640, 480));
        level1->setMaximumSize(QSize(640, 480));
        frame1 = new QFrame(level1);
        frame1->setObjectName("frame1");
        frame1->setGeometry(QRect(0, 0, 640, 480));
        frame1->setStyleSheet(QString::fromUtf8("#frame1{background-image: url(:/processed/background_level1.jpg);}"));
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame1);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-1, -1, 641, 481));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{background-image: url(:/processed/menubar.png);}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        btnMenubar = new QPushButton(frame_2);
        btnMenubar->setObjectName("btnMenubar");
        btnMenubar->setGeometry(QRect(540, 0, 80, 18));

        retranslateUi(level1);

        QMetaObject::connectSlotsByName(level1);
    } // setupUi

    void retranslateUi(QWidget *level1)
    {
        level1->setWindowTitle(QCoreApplication::translate("level1", "Form", nullptr));
        btnMenubar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class level1: public Ui_level1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVEL1_H
