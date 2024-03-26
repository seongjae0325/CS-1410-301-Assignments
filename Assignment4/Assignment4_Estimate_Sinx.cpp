/*
Written by: Sungjae Hwang
Date: Mar 26, 2024
*/
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
const float PI = 3.14159265;

int factorial(int); // the function that returns n!
/*
*************************************************************
A function to compute sin(x) for given x
x needs to be converted into radians, as the <cmath> sin function,
input is in radians.
*****************************************************************
*/
float sin(float, int);

int main() {
    float x;
    int n;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << fixed << setprecision(2);
    cout << "sin(" << x << ") = " << sin(x * (PI / 180), n) << endl;
    return 0;
}

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

float sin(float x, int n) {
    float result = 0;
    int sign = 1;
    for (int i = 1; i <= n; i += 2) {
        result += sign * pow(x, i) / factorial(i);
        sign *= -1;
    }
    return result;
}
