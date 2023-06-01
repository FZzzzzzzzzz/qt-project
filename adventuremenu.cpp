#include "adventuremenu.h"
#include "ui_adventuremenu.h"
#include "menu.h"
#include "qpixmap.h"
#include "qbitmap.h"
#include "qpalette.h"
#include "level1.h"

AdventureMenu::AdventureMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdventureMenu)
{
    ui->setupUi(this);


    QBitmap MainMenuMask;
    MainMenuMask.load(":processed/advmainmenubutton_1.jpg");
    ui->advMainMenuButton->resize(MainMenuMask.size());
    ui->advMainMenuButton->setMask(MainMenuMask.mask());
    ui->advMainMenuButton->setStyleSheet("background: transparent;background-image: url(:processed/advmainmenubutton_1.jpg);");
    QBitmap PlayMask;
    PlayMask.load(":processed/advplaybutton_1.jpg");
    ui->advPlayButton->resize(PlayMask.size());
    ui->advPlayButton->setMask(PlayMask.mask());
    ui->advPlayButton->setStyleSheet("background: transparent;background-image: url(:processed/advplaybutton_1.jpg);");

    QBitmap btnA1Mask;
    btnA1Mask.load(":processed/btnA1_1.png");
    ui->btnA1->resize(btnA1Mask.size());
    ui->btnA1->setMask(btnA1Mask.mask());
    ui->btnA1->setStyleSheet("background: transparent;background-image: url(:processed/btnA1_1.png);");

}

AdventureMenu::~AdventureMenu()
{
    delete ui;
}

void AdventureMenu::on_advMainMenuButton_pressed()
{
    ui->advMainMenuButton->setStyleSheet("background: transparent;background-image: url(:processed/advmainmenubutton_2.jpg);");

}


void AdventureMenu::on_advMainMenuButton_released()
{
    ui->advMainMenuButton->setStyleSheet("background: transparent;background-image: url(:processed/advmainmenubutton_1.jpg);");
    Menu* m;
    m = new Menu;
    m->show();
    close();
}


void AdventureMenu::on_advPlayButton_pressed()
{
    ui->advPlayButton->setStyleSheet("background: transparent;background-image: url(:processed/advplaybutton_2.jpg);");

}


void AdventureMenu::on_advPlayButton_released()
{
    ui->advPlayButton->setStyleSheet("background: transparent;background-image: url(:processed/advplaybutton_1.jpg);");
    if(flagA1==1)
   {
        level1* l1;
        l1 = new level1;
        l1->show();
        close();
   }
}


void AdventureMenu::on_btnA1_clicked()
{
    if(flagA1==0)
    {
        ui->btnA1->setStyleSheet("background: transparent;background-image: url(:processed/btnA1_2.png);");
        flagA1 = 1;
    }
    else if(flagA1==1)
    {
        ui->btnA1->setStyleSheet("background: transparent;background-image: url(:processed/btnA1_1.png);");
        flagA1 = 0;
    }
}

