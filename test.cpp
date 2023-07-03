#include "test.h"
#include "ui_test.h"
#include "qpainter.h"
#include "qpainterpath.h"

Test::Test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Test)
{
    ui->setupUi(this);
}

void Test::paintEvent(QPaintEvent *){

    QPainterPath path;
    path.addRect(20, 20, 60, 60);
    path.moveTo(0, 0);
    path.cubicTo(99, 0,  50, 50,  99, 99);
    path.cubicTo(0, 99,  50, 50,  0, 0);

    QPainter painter(this);
    painter.fillRect(0, 0, 100, 100, Qt::white);
    painter.setPen(QPen(QColor(79, 106, 25), 1, Qt::SolidLine,
                        Qt::FlatCap, Qt::MiterJoin));
    painter.setBrush(QColor(122, 163, 39));

    painter.drawPath(path);

 }

Test::~Test()
{
    delete ui;
}
