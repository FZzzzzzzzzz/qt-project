#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnGauntlet_pressed();
    void on_btnGauntlet_released();
    void on_btnOptions_pressed();
    void on_btnOptions_released();

    void on_btnAdventure_pressed();

    void on_btnAdventure_released();

    void on_btnMoreGames_pressed();

    void on_btnMoreGames_released();

    void on_btnQuit_pressed();

    void on_btnQuit_released();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
