/*
  Author - Name: Sungjae Hwang         ID: u1503349
  Date: March 10, 2024
  Program: To check whether a number is happy or not
   Version 2 - using while loop
   filename: assignment2_ver1.cpp
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    int initialNum;
    cout << "Enter the number: ";
    cin >> num;
    initialNum = num;
    if (num <= 0) {
        cout << "please Enter number greater than 0" << endl;
        return 0;
    } else {
        int sum;
        bool isItFinished = false;
        while (!isItFinished) {
            sum = 0;
            int digitNum;
            while (num != 0) {
                digitNum = num % 10;
                sum += digitNum * digitNum;
                num = num / 10;
            }
            if (sum == 1) {
                cout << "Number " << initialNum << " is Happy number" << endl;
                isItFinished = true;
            } else if (sum == 4) {
                cout << "Number " << initialNum << " is unhappy number" << endl;
                isItFinished = true;
            } else {
                num = sum;
            }
        }

    }
}