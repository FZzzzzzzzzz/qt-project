#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qpixmap.h"
#include "qbitmap.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnGauntlet_pressed()
{
    ui->btnGauntlet->setStyleSheet("background: transparent;background-image: url(:processed/mmGAUNTLETBUTTON_preview_rev_2.png);");
}

void MainWindow::on_btnGauntlet_released()
{
    ui->btnGauntlet->setStyleSheet("background: transparent;background-image: url(:processed/mmGAUNTLETBUTTON_preview_rev_1.png);");
}

void MainWindow::on_btnOptions_pressed()
{
    ui->btnOptions->setStyleSheet("background: transparent;background-image: url(:processed/mmOPTIONSBUTTON_preview_rev_3.png);");
}

void MainWindow::on_btnOptions_released()
{
    ui->btnOptions->setStyleSheet("background: transparent;background-image: url(:processed/mmOPTIONSBUTTON_preview_rev_1.png);");
}

void MainWindow::on_btnAdventure_pressed()
{
    ui->btnAdventure->setStyleSheet("background: transparent;background-image: url(:processed/mmARCADEBUTTON_preview_rev_2.png);");
}

void MainWindow::on_btnAdventure_released()
{
    ui->btnAdventure->setStyleSheet("background: transparent;background-image: url(:processed/mmARCADEBUTTON_preview_rev_1.png);");
}

void MainWindow::on_btnMoreGames_pressed()
{
    ui->btnMoreGames->setStyleSheet("background: transparent;background-image: url(:processed/mmMOREGAMESBUTTON_preview_rev_2.png);");
}

void MainWindow::on_btnMoreGames_released()
{
    ui->btnMoreGames->setStyleSheet("background: transparent;background-image: url(:processed/mmMOREGAMESBUTTON_preview_rev_1.png);");
}

void MainWindow::on_btnQuit_pressed()
{
    ui->btnQuit->setStyleSheet("background: transparent;background-image: url(:processed/mmQUITBUTTON_preview_rev_2.png);");
}

void MainWindow::on_btnQuit_released()
{
    ui->btnQuit->setStyleSheet("background: transparent;background-image: url(:processed/mmQUITBUTTON_preview_rev_1.png);");
}

