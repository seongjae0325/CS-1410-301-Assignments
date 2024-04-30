/*
Author: Sungjae Hwang
Date : April 21, 2024
*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

struct Vertex {
    float x, y;
};

float Distance(const Vertex &v1, const Vertex &v2) {
    double dx = v2.x - v1.x;
    double dy = v2.y - v1.y;
    return sqrt(dx * dx + dy * dy);
}

float triangleArea(const Vertex &v1, const Vertex &v2, const Vertex &v3) {
    double sideA = Distance(v1, v2);
    double sideB = Distance(v2, v3);
    double sideC = Distance(v3, v1);
    double t = (sideA + sideB + sideC) / 2;
    return sqrt(t * (t - sideA) * (t - sideB) * (t - sideC));
}

int main() {
    Vertex v1, v2, v3;

    cout << "Enter the first vertex coordinates of the triangle: ";
    std::cin >> v1.x >> v1.y;
    cout << "Enter the second vertex coordinates of the triangle: ";
    std::cin >> v2.x >> v2.y;
    cout << "Enter the third vertex coordinates of the triangle: ";
    std::cin >> v3.x >> v3.y;

    double area = triangleArea(v1, v2, v3);
    cout << "Area of triangle: " << area << endl;
    return 0;
}
