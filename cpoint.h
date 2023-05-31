#ifndef CPOINT_H
#define CPOINT_H

using namespace std;


class Cpoint
{
public:
    Cpoint();
    ~Cpoint();
    float x;
    float y;
    Cpoint(float xx,float yy):x(xx),y(yy){}
};

#endif // CPOINT_H
