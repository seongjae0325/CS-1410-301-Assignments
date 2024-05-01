/*
Author: Sungjae Hwang
Date : May 1, 2024
*/

#include "Point2D.h"
#include <cmath>

using namespace std;

Point2D::Point2D() {
    firstNum = 0;
    secondNum = 0;
}

Point2D::Point2D(int x, int y) {
    firstNum = x;
    secondNum = y;
}

int Point2D::getX() {
    return firstNum;
}

int Point2D::getY() {
    return secondNum;
}

void Point2D::clear() {
    firstNum = 0;
    secondNum = 0;
}

void Point2D::move(int x, int y) {
    firstNum = x;
    secondNum = y;
}

string Point2D::DisplayPoint() {
    string firstNumToString = to_string(firstNum);
    string secondNumToString = to_string(secondNum);
    string result = "(" + firstNumToString + "," + secondNumToString + ")";
    return result;
}

double Point2D::distance(Point2D secondPoint) {
    double firstNum2 = secondPoint.firstNum;
    double secondNum2 = secondPoint.secondNum;

    double distance = sqrt((firstNum - firstNum2) * (firstNum - firstNum2) + (secondNum - secondNum2) * (secondNum - secondNum2));
    return distance;
}

double Point2D::slope(Point2D secondPoint) {
    double firstNum2 = secondPoint.firstNum;
    double secondNum2 = secondPoint.secondNum;

    double slope = (secondNum2 - secondNum) / (firstNum2 - firstNum);
    return slope;
}