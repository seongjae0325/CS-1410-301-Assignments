/*
Author: Sungjae Hwang
Date : May 1, 2024
*/

#ifndef ASSIGNMENT_1_POINT2D_H
#define ASSIGNMENT_1_POINT2D_H

#include <string>

using namespace std;

class Point2D {
private:
    int firstNum;
    int secondNum;

public:
    Point2D();
    Point2D(int x, int y);

    int getX();
    int getY();
    void clear();
    void move(int x, int y);
    string DisplayPoint();
    double distance(Point2D secondPoint);
    double slope(Point2D secondPoint);
};


#endif //ASSIGNMENT_1_POINT2D_H
