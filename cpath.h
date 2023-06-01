#ifndef CPATH_H
#define CPATH_H
#include "cpoint.h"
#include "vector"
#include "cmath"

using namespace std;


class cPath
{
public:
    vector<cPoint> importantPoints;
    vector<cPoint> inpathPoints;
    float space;

    void getAllPoints(){//创建折线轨迹并将轨迹点录入inpathPoints
        for (int i = 0; i < importantPoints.size() - 1; ++i) {
            float delta_x = importantPoints[i].x-importantPoints[i-1].x;
            float delta_y = importantPoints[i].y-importantPoints[i-1].y;
            float delta_l = sqrt(delta_x*delta_x+delta_y*delta_y);
            int n = delta_l/space;
            for (int j = 0; j < n; ++j) {
                float tmp_x = importantPoints[i].x+delta_x*j/n;
                float tmp_y = importantPoints[i].y+delta_y*j/n;
                inpathPoints.push_back(cPoint(tmp_x,tmp_y));
            }
        }
    }
    cPath();
};

#endif // CPATH_H
