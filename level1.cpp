#include "level1.h"
#include "ui_level1.h"
#include "adventuremenu.h"
#include "qtimer.h"
#include "qpainter.h"
#include "qpixmap.h"
#include "qrect.h"
#include "cfrog.h"
#include "cball.h"
#include "cpoint.h"
#include "cpath.h"


using namespace std;

double getAngle(int x_tmp, int y_tmp){
    QPointF MousePt;
    MousePt = QCursor::pos();
    double tmp = std::atan2((MousePt.y()-y_tmp+11-54),(MousePt.x()-x_tmp+47-54));
    double Angle= (tmp*180-270)/3.141592;
    return Angle;
}

bool level1::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->frame_2 && event->type() == QEvent::Paint)
    {
        QPainter painter(ui->frame_2);
        QPixmap pix;
        pix.load(":processed/frog.png");
        QRect rectLevel1 = this->geometry();
        painter.translate(320+5,240+44);
        painter.rotate(getAngle(rectLevel1.center().x(),rectLevel1.center().y()));
        painter.drawPixmap(-54,-54,108,108,pix);
    }
    return QWidget::eventFilter(watched,event);
}


level1::level1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::level1)
{
    ui->setupUi(this);

    ui->frame_2->installEventFilter(this);

    setStyleSheet("background: transparent;background-image: url(:/processed/background_level1.jpg);");

    QBitmap btnMenubarMask;
    btnMenubarMask.load(":processed/btnMenubar_1.jpg");
    ui->btnMenubar->resize(btnMenubarMask.size());
    ui->btnMenubar->setMask(btnMenubarMask.mask());
    ui->btnMenubar->setStyleSheet("background: transparent;background-image: url(:processed/btnMenubar_1.jpg);");

    QBitmap sunCoverMask;
    sunCoverMask.load(":processed/sunCover.png");
    ui->sunCover->resize(sunCoverMask.size());
    ui->sunCover->setMask(sunCoverMask.mask());
    ui->sunCover->setStyleSheet("background: transparent;background-image: url(:processed/sunCover.png);");
    QBitmap sunFaceMask;
    sunFaceMask.load(":processed/sunFace_1.png");
    ui->sunFace->resize(sunFaceMask.size());
    ui->sunFace->setMask(sunFaceMask.mask());
    ui->sunFace->setStyleSheet("background: transparent;background-image: url(:processed/sunFace_1.png);");

    QTimer *timer = new QTimer(this);
    connect(timer,&QTimer::timeout,[=](){
        update();
    });
    timer->start(1); // 每隔1s

}

level1::~level1()
{
    delete ui;
}

void level1::on_btnMenubar_pressed()
{
    ui->btnMenubar->setStyleSheet("background: transparent;background-image: url(:processed/btnMenubar_2.jpg);");

}

void level1::on_btnMenubar_released()
{
    ui->btnMenubar->setStyleSheet("background: transparent;background-image: url(:processed/btnMenubar_1.jpg);");
    AdventureMenu* adm;
    adm = new AdventureMenu;
    adm->show();
    close();
}

