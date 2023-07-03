#include "menu.h"
#include "ui_menu.h"
#include "adventuremenu.h"
#include "gauntmenu.h"
#include "option.h"
#include "qpixmap.h"
#include "qbitmap.h"
#include "qpalette.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    QIcon icon1(":processed/icon1.png");
    this->setWindowIcon(icon1);
    this->setWindowTitle("zuma");

    QPixmap pixmap(":processed/mmscreen.jpg");
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);
    setAutoFillBackground(true);

    QBitmap eyeleftMaskMask;
    eyeleftMaskMask.load(":processed/mmeyeleft_preview_rev_1.png");
    ui->eye_left->resize(eyeleftMaskMask.size());
    ui->eye_left->setMask(eyeleftMaskMask.mask());
    ui->eye_left->setStyleSheet("background: transparent;background-image: url(:processed/mmeyeleft_preview_rev_1.png);");
    QBitmap eyerightMask;
    eyerightMask.load(":processed/mmeyeright_preview_rev_1.png");
    ui->eye_right->resize(eyerightMask.size());
    ui->eye_right->setMask(eyerightMask.mask());
    ui->eye_right->setStyleSheet("background: transparent;background-image: url(:processed/mmeyeright_preview_rev_1.png);");


    QBitmap btnAdventureMask;
    btnAdventureMask.load(":processed/mmARCADEBUTTON_preview_rev_1.png");
    ui->btnAdventure->resize(btnAdventureMask.size());
    ui->btnAdventure->setMask(btnAdventureMask.mask());
    ui->btnAdventure->setStyleSheet("background: transparent;background-image: url(:processed/mmARCADEBUTTON_preview_rev_1.png);");
    QBitmap btnGauntletMask;
    btnGauntletMask.load(":processed/mmGAUNTLETBUTTON_preview_rev_1.png");
    ui->btnGauntlet->resize(btnGauntletMask.size());
    ui->btnGauntlet->setMask(btnGauntletMask.mask());
    ui->btnGauntlet->setStyleSheet("background: transparent;background-image: url(:processed/mmGAUNTLETBUTTON_preview_rev_1.png);");
    QBitmap btnOptionsMask;
    btnOptionsMask.load(":processed/mmOPTIONSBUTTON_preview_rev_1.png");
    ui->btnOptions->resize(btnOptionsMask.size());
    ui->btnOptions->setMask(btnOptionsMask.mask());
    ui->btnOptions->setStyleSheet("background: transparent;background-image: url(:processed/mmOPTIONSBUTTON_preview_rev_1.png);");
    QBitmap btnMoreGamesMask;
    btnMoreGamesMask.load(":processed/mmMOREGAMESBUTTON_preview_rev_1.png");
    ui->btnMoreGames->resize(btnMoreGamesMask.size());
    ui->btnMoreGames->setMask(btnMoreGamesMask.mask());
    ui->btnMoreGames->setStyleSheet("background: transparent;background-image: url(:processed/mmMOREGAMESBUTTON_preview_rev_1.png);");
    QBitmap btnQuitMask;
    btnQuitMask.load(":processed/mmQUITBUTTON_preview_rev_1.png");
    ui->btnQuit->resize(btnQuitMask.size());
    ui->btnQuit->setMask(btnQuitMask.mask());
    ui->btnQuit->setStyleSheet("background: transparent;background-image: url(:processed/mmQUITBUTTON_preview_rev_1.png);");

}


Menu::~Menu()
{
    delete ui;
}



void Menu::on_btnAdventure_clicked()
{

}


void Menu::on_btnAdventure_pressed()
{
    ui->btnAdventure->setStyleSheet("background: transparent;background-image: url(:processed/mmARCADEBUTTON_preview_rev_2.png);");

}


void Menu::on_btnAdventure_released()
{
    ui->btnAdventure->setStyleSheet("background: transparent;background-image: url(:processed/mmARCADEBUTTON_preview_rev_1.png);");
    AdventureMenu* adm;
    adm = new AdventureMenu;
    adm->show();
    close();
}


void Menu::on_btnGauntlet_pressed()
{
    ui->btnGauntlet->setStyleSheet("background: transparent;background-image: url(:processed/mmGAUNTLETBUTTON_preview_rev_2.png);");

}


void Menu::on_btnGauntlet_released()
{
    ui->btnGauntlet->setStyleSheet("background: transparent;background-image: url(:processed/mmGAUNTLETBUTTON_preview_rev_1.png);");
    GauntMenu* gtm;
    gtm = new GauntMenu;
    gtm->show();
    close();
}


void Menu::on_btnOptions_pressed()
{
    ui->btnOptions->setStyleSheet("background: transparent;background-image: url(:processed/mmOPTIONSBUTTON_preview_rev_3.png);");

}


void Menu::on_btnOptions_released()
{
    ui->btnOptions->setStyleSheet("background: transparent;background-image: url(:processed/mmOPTIONSBUTTON_preview_rev_1.png);");
    Option* opt;
    opt = new Option;
    opt->show();
}


void Menu::on_btnMoreGames_pressed()
{
    ui->btnMoreGames->setStyleSheet("background: transparent;background-image: url(:processed/mmMOREGAMESBUTTON_preview_rev_2.png);");

}


void Menu::on_btnMoreGames_released()
{
    ui->btnMoreGames->setStyleSheet("background: transparent;background-image: url(:processed/mmMOREGAMESBUTTON_preview_rev_1.png);");

}


void Menu::on_btnQuit_pressed()
{
    ui->btnQuit->setStyleSheet("background: transparent;background-image: url(:processed/mmQUITBUTTON_preview_rev_2.png);");

}


void Menu::on_btnQuit_released()
{
    ui->btnQuit->setStyleSheet("background: transparent;background-image: url(:processed/mmQUITBUTTON_preview_rev_1.png);");
    close();
}

