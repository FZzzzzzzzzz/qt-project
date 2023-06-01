#ifndef CBALL_H
#define CBALL_H
#include "cpoint.h"
#include "cpath.h"

using namespace std;


class cBall
{
public:
    int color;
    int location;
    int direction;
    const int r = 16;
    cPoint center;
    cBall();
    void show(){

    }
    void ball_move(cPath path){
        center = path.inpathPoints[location];
    }
    void ball_initiate(cPath path){
        location = 0;
        ball_move(path);
        direction = 1;
    }
};

#endif // CBALL_H
