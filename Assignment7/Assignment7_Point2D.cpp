/**
 * This code contains code to demonstrate how to instantiate the Point2D class, as
 * well as invoke methods on Point2D objects.
 *
 * (Instantiating a class means to create objects of that class.
 * Invoking a method means to call that method.)
 *
 * @author Habtamu M and ??
 * @version April  24, 2024
 */

#include<iostream>
#include "Point2D.h"
using namespace std;

int main()
{
    // Create (3, 1)
    Point2D southWest = Point2D(3, 1);
    // Create (10, 12)
    Point2D northEast = Point2D(10, 12);
    cout << "This is a Point object: " << southWest.DisplayPoint()
         << endl;
    cout << "The x coordinate of point" << southWest.DisplayPoint()
         << " is " << southWest.getX() << endl;
    cout << "The y coordinate of point " << northEast.DisplayPoint()
         << " is " << northEast.getY() << endl;
    cout << "The distance between " << southWest.DisplayPoint()
         << " and " << northEast.DisplayPoint() << " is "
         << southWest.distance(northEast) << endl;
    cout << "This is the same as the distance between "
         << northEast.DisplayPoint() << " and "
         << southWest.DisplayPoint() << ", which is "
         << northEast.distance(southWest) << endl;
    cout << "The slope of the straight line that connects "
         << southWest.DisplayPoint() << " and "
         << northEast.DisplayPoint() << " is "
         << southWest.slope(northEast) << endl;
    cout << "This is the same as the slope of the straight line that connects "
         << northEast.DisplayPoint() << " and "
         << southWest.DisplayPoint() << ", which is "
         << northEast.slope(southWest) << endl;
    southWest.move(10, 12);
    // Create (0, 0)
    Point2D zero = Point2D();
    // Create array of Point objects and display each as text
    Point2D locations[3];
    locations[0] = zero;
    locations[1] = northEast;
    locations[2] = southWest;
    cout << "[";
//    for (auto p : locations)
//    {
//        cout<< p.DisplayPoint() << ",";
//    }
    cout << "]" << endl;

}