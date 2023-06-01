#include "level1.h"
#include "ui_level1.h"
#include "adventuremenu.h"
#include "cfrog.h"
#include "cball.h"
#include "cpoint.h"
#include "cpath.h"


using namespace std;

level1::level1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::level1)
{
    ui->setupUi(this);

    QBitmap btnMenubarMask;
    btnMenubarMask.load(":processed/btnMenubar_1.jpg");
    ui->btnMenubar->resize(btnMenubarMask.size());
    ui->btnMenubar->setMask(btnMenubarMask.mask());
    ui->btnMenubar->setStyleSheet("background: transparent;background-image: url(:processed/btnMenubar_1.jpg);");

}

level1::~level1()
{
    delete ui;
}

void level1::on_btnMenubar_pressed()
{
    ui->btnMenubar->setStyleSheet("background: transparent;background-image: url(:processed/btnMenubar_2.jpg);");

}

void level1::on_btnMenubar_released()
{
    ui->btnMenubar->setStyleSheet("background: transparent;background-image: url(:processed/btnMenubar_1.jpg);");
    AdventureMenu* adm;
    adm = new AdventureMenu;
    adm->show();
    close();
}

