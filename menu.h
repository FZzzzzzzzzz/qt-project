#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QIcon>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_btnAdventure_clicked();

    void on_btnAdventure_pressed();

    void on_btnAdventure_released();

    void on_btnGauntlet_pressed();

    void on_btnGauntlet_released();

    void on_btnOptions_pressed();

    void on_btnOptions_released();

    void on_btnMoreGames_pressed();

    void on_btnMoreGames_released();

    void on_btnQuit_pressed();

    void on_btnQuit_released();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
