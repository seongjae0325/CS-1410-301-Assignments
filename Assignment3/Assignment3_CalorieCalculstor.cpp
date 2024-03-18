/*
Author: Sungjae Hwang
Date: March 19, 2024
Program: Calorie Calculator
filename: Assignment3_CalorieCalculstor.cpp
*/

#include <iostream>

using namespace std;
double inputValidate(double);
void getWeight(double &);
double calculateCaloriesFat(double);
double calculateCaloriesSugar(double);
double calculateBadCalories(double);

int main() {
    double weight = 0;
    double badCaloriesValue = calculateBadCalories(weight);
    cout << "Total Bad calories :" << badCaloriesValue << endl;
    return 0;
}

double inputValidate(double num) {
    while (!(cin >> num) || (num <= 0)) {
        cout << "Error. An integer greater than zero must be entered: ";
    }
    return num;
}

void getWeight(double &num) {
    cout << "What is the weight in pounds: ";
    // store weight in a reference parameter variable
    num = inputValidate(num);
}

double calculateCaloriesFat(double weight) {
    double fatCalories = weight * 4100;
    cout << "Fat :" << fatCalories << endl;
    return fatCalories;
}

double calculateCaloriesSugar(double weight) {
    double sugarCalories = weight * 936;
    cout << "Sugar :" << sugarCalories << endl;
    return sugarCalories;
}

double calculateBadCalories(double weight) {
    // get weight and validate the input value
    getWeight(weight);
    // get calculated calories for fat
    double fatCaloriesValue = calculateCaloriesFat(weight);
    // get calculated calories for sugar
    double sugarCaloriesValue = calculateCaloriesSugar(weight);
    // get calculated total calories for fat and sugar
    double totalBadCalories = fatCaloriesValue + sugarCaloriesValue;
    return totalBadCalories;
}