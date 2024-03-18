/*
Author: Sungjae Hwang
Date: March 19, 2024
Program: Armstrong numbers between 1 and 1000.
filename: Assignment3_ArmstrongNumber.cpp
*/

#include <iostream>
#include<cmath>

using namespace std;
//function prototypes
int sumCube(int);
void ArmstrongNumber();

int main() {
    cout << "Armstrong numbers between 1 and 1000 : ";
    ArmstrongNumber();
}

/********************************************************
* Definition of : int sumCube(int num) *
* This function calculate sum of cubes of its digits *
* and returns the result *
********************************************************/
int sumCube(int num) {
    int sum = 0;
    while (num != 0) {
        int digitNum;
        digitNum = num % 10;
        sum += digitNum * digitNum * digitNum;
        num = num / 10;
    }
    return sum;
}

/********************************************************
* Definition of : void ArmstrongNumber() *
* This function identifies armsrong number between *
* 1 and 1000. *
********************************************************/
void ArmstrongNumber() {
    for (int i = 1; i <= 1000; i++) {
        if (sumCube(i) == i) {
            cout << i << ", ";
        }
    }
}