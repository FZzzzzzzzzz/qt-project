#ifndef GAUNTMENU_H
#define GAUNTMENU_H

#include <QWidget>

namespace Ui {
class GauntMenu;
}

class GauntMenu : public QWidget
{
    Q_OBJECT

public:
    explicit GauntMenu(QWidget *parent = nullptr);
    ~GauntMenu();

private slots:
    void on_btnGauntMenu_pressed();

    void on_btnGauntMenu_released();

private:
    Ui::GauntMenu *ui;
};

#endif // GAUNTMENU_H
