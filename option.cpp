#include "option.h"
#include "ui_option.h"

Option::Option(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Option)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
}

Option::~Option()
{
    delete ui;
}

void Option::on_btnMenu_pressed()
{
    ui->btnMenu->setStyleSheet("background: transparent;background-image: url(:processed/btnMenubar_2.jpg);");

}


void Option::on_btnMenu_released()
{
    ui->btnMenu->setStyleSheet("background: transparent;background-image: url(:processed/btnMenubar_1.jpg);");
    close();
}

