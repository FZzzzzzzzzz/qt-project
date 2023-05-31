#include "gauntmenu.h"
#include "ui_gauntmenu.h"
#include "menu.h"
#include "qpixmap.h"
#include "qbitmap.h"
#include "qpalette.h"

GauntMenu::GauntMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GauntMenu)
{
    ui->setupUi(this);

    QBitmap GauntMenuMask;
    GauntMenuMask.load(":processed/btnGauntMenu_1.png");
    ui->btnGauntMenu->resize(GauntMenuMask.size());
    ui->btnGauntMenu->setMask(GauntMenuMask.mask());
    ui->btnGauntMenu->setStyleSheet("background: transparent;background-image: url(:processed/btnGauntMenu_1.png);");
    QBitmap SunGemMask;
    SunGemMask.load(":processed/GauntSunGem.png");
    ui->SunGem->resize(SunGemMask.size());
    ui->SunGem->setMask(SunGemMask.mask());
    ui->SunGem->setStyleSheet("background: transparent;background-image: url(:processed/GauntSunGem.png);");
}

GauntMenu::~GauntMenu()
{
    delete ui;
}

void GauntMenu::on_btnGauntMenu_pressed()
{
    ui->btnGauntMenu->setStyleSheet("background: transparent;background-image: url(:processed/btnGauntMenu_2.png);");

}


void GauntMenu::on_btnGauntMenu_released()
{
    ui->btnGauntMenu->setStyleSheet("background: transparent;background-image: url(:processed/btnGauntMenu_1.png);");
    Menu* m;
    m = new Menu;
    m->show();
    close();
}

