#ifndef LEVEL1_H
#define LEVEL1_H

#include <QWidget>

namespace Ui {
class level1;
}

class level1 : public QWidget
{
    Q_OBJECT

protected:

    bool eventFilter(QObject *watched, QEvent *event);

public:
    explicit level1(QWidget *parent = nullptr);
    ~level1();

private slots:
    void on_btnMenubar_pressed();

    void on_btnMenubar_released();

private:
    Ui::level1 *ui;
};

#endif // LEVEL1_H
