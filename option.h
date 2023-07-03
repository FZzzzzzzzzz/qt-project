#ifndef OPTION_H
#define OPTION_H

#include <QWidget>

namespace Ui {
class Option;
}

class Option : public QWidget
{
    Q_OBJECT

public:
    explicit Option(QWidget *parent = nullptr);
    ~Option();

private slots:
    void on_btnMenu_pressed();

    void on_btnMenu_released();

private:
    Ui::Option *ui;
};

#endif // OPTION_H
