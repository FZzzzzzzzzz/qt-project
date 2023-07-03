#ifndef TEST_H
#define TEST_H

#include <QWidget>

namespace Ui {
class Test;
}

class Test : public QWidget
{
    Q_OBJECT

public:

    explicit Test(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Test();

private:
    Ui::Test *ui;
};

#endif // TEST_H
