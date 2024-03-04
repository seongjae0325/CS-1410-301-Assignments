/*
* C++ program that computes the average and variance of students test scores.
* source file : assignment.cpp
* Author : Sungjae Hwang
****** ID: u1503349
* **** Name: Sungjae Hwang
*/

#include <iostream>
#include <iomanip>

int main() {
    // student1's test score and sum
    double firstScoreOfStudent1, secondScoreOfStudent1, thirdScoreOfStudent1;
    // student2's test score and sum
    double firstScoreOfStudent2, secondScoreOfStudent2, thirdScoreOfStudent2;
    // student3's test score and sum
    double firstScoreOfStudent3, secondScoreOfStudent3, thirdScoreOfStudent3;
    // student4's test score and sum
    double firstScoreOfStudent4, secondScoreOfStudent4, thirdScoreOfStudent4;
    // student5's test score and sum
    double firstScoreOfStudent5, secondScoreOfStudent5, thirdScoreOfStudent5;

    // get student1's test score and sum score
    std::cout << "Type student1's first test scores: ";
    std::cin >> firstScoreOfStudent1;
    std::cout << "Type student1's second test scores: ";
    std::cin >> secondScoreOfStudent1;
    std::cout << "Type student1's third test scores: ";
    std::cin >> thirdScoreOfStudent1;

    // get student2's test score and sum score
    std::cout << "Type student2's first test scores: ";
    std::cin >> firstScoreOfStudent2;
    std::cout << "Type student2's second test scores: ";
    std::cin >> secondScoreOfStudent2;
    std::cout << "Type student2's third test scores: ";
    std::cin >> thirdScoreOfStudent2;

    // get student3's test score and sum score
    std::cout << "Type student3's first test scores: ";
    std::cin >> firstScoreOfStudent3;
    std::cout << "Type student3's second test scores: ";
    std::cin >> secondScoreOfStudent3;
    std::cout << "Type student3's third test scores: ";
    std::cin >> thirdScoreOfStudent3;

    // get student4's test score and sum score
    std::cout << "Type student4's first test scores: ";
    std::cin >> firstScoreOfStudent4;
    std::cout << "Type student4's second test scores: ";
    std::cin >> secondScoreOfStudent4;
    std::cout << "Type student4's third test scores: ";
    std::cin >> thirdScoreOfStudent4;

    // get student5's test score and sum score
    std::cout << "Type student5's first test scores: ";
    std::cin >> firstScoreOfStudent5;
    std::cout << "Type student5's second test scores: ";
    std::cin >> secondScoreOfStudent5;
    std::cout << "Type student5's third test scores: ";
    std::cin >> thirdScoreOfStudent5;

    // get sum of test score
    double sumScoreOfTest1 = firstScoreOfStudent1 + firstScoreOfStudent2 + firstScoreOfStudent3 + firstScoreOfStudent4 +
                             firstScoreOfStudent5;
    double sumScoreOfTest2 =
            secondScoreOfStudent1 + secondScoreOfStudent2 + secondScoreOfStudent3 + secondScoreOfStudent4 +
            secondScoreOfStudent5;
    double sumScoreOfTest3 = thirdScoreOfStudent1 + thirdScoreOfStudent2 + thirdScoreOfStudent3 + thirdScoreOfStudent4 +
                             thirdScoreOfStudent5;

    // get average of test score
    double averageScoreOfTest1 = sumScoreOfTest1 / 5;
    double averageScoreOfTest2 = sumScoreOfTest2 / 5;
    double averageScoreOfTest3 = sumScoreOfTest3 / 5;

    // get sum of square test score
    double doubleSumScoreOfTest1 =
            firstScoreOfStudent1 * firstScoreOfStudent1 + firstScoreOfStudent2 * firstScoreOfStudent2 +
            firstScoreOfStudent3 * firstScoreOfStudent3 + firstScoreOfStudent4 * firstScoreOfStudent4 +
            firstScoreOfStudent5 * firstScoreOfStudent5;
    double doubleSumScoreOfTest2 =
            secondScoreOfStudent1 * secondScoreOfStudent1 + secondScoreOfStudent2 * secondScoreOfStudent2 +
            secondScoreOfStudent3 * secondScoreOfStudent3 + secondScoreOfStudent4 * secondScoreOfStudent4 +
            secondScoreOfStudent5 * secondScoreOfStudent5;
    double doubleSumScoreOfTest3 =
            thirdScoreOfStudent1 * thirdScoreOfStudent1 + thirdScoreOfStudent2 * thirdScoreOfStudent2 +
            thirdScoreOfStudent3 * thirdScoreOfStudent3 + thirdScoreOfStudent4 * thirdScoreOfStudent4 +
            thirdScoreOfStudent5 * thirdScoreOfStudent5;

    // get variance of test score
    double varianceOfTest1 = doubleSumScoreOfTest1 / 5 - averageScoreOfTest1 * averageScoreOfTest1;
    double varianceOfTest2 = doubleSumScoreOfTest2 / 5 - averageScoreOfTest2 * averageScoreOfTest2;
    double varianceOfTest3 = doubleSumScoreOfTest3 / 5 - averageScoreOfTest3 * averageScoreOfTest3;

    // format output
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << "==================================================================" << std::endl;
    const char separator = ' ';
    const int cellWidth = 12;
    std::cout << std::left << std::setw(cellWidth) << "Student #";
    std::cout << std::left << std::setw(cellWidth) << "Test #1";
    std::cout << std::left << std::setw(cellWidth) << "Test #2";
    std::cout << std::left << std::setw(cellWidth) << "Test #3" << std::endl;
    std::cout << std::left << std::setw(cellWidth) << 1;
    std::cout << std::left << std::setw(cellWidth) << firstScoreOfStudent1;
    std::cout << std::left << std::setw(cellWidth) << secondScoreOfStudent1;
    std::cout << std::left << std::setw(cellWidth) << thirdScoreOfStudent1 << std::endl;
    std::cout << std::left << std::setw(cellWidth) << 2;
    std::cout << std::left << std::setw(cellWidth) << firstScoreOfStudent2;
    std::cout << std::left << std::setw(cellWidth) << secondScoreOfStudent2;
    std::cout << std::left << std::setw(cellWidth) << thirdScoreOfStudent2 << std::endl;
    std::cout << std::left << std::setw(cellWidth) << 3;
    std::cout << std::left << std::setw(cellWidth) << firstScoreOfStudent3;
    std::cout << std::left << std::setw(cellWidth) << secondScoreOfStudent3;
    std::cout << std::left << std::setw(cellWidth) << thirdScoreOfStudent3 << std::endl;
    std::cout << std::left << std::setw(cellWidth) << 4;
    std::cout << std::left << std::setw(cellWidth) << firstScoreOfStudent4;
    std::cout << std::left << std::setw(cellWidth) << secondScoreOfStudent4;
    std::cout << std::left << std::setw(cellWidth) << thirdScoreOfStudent4 << std::endl;
    std::cout << std::left << std::setw(cellWidth) << 5;
    std::cout << std::left << std::setw(cellWidth) << firstScoreOfStudent5;
    std::cout << std::left << std::setw(cellWidth) << secondScoreOfStudent5;
    std::cout << std::left << std::setw(cellWidth) << thirdScoreOfStudent5 << std::endl;
    std::cout << "==================================================================" << std::endl;
    std::cout << std::left << std::setw(cellWidth) << std::setfill(separator) << "Average";
    std::cout << std::left << std::setw(cellWidth) << std::setfill(separator) << averageScoreOfTest1;
    std::cout << std::left << std::setw(cellWidth) << std::setfill(separator) << averageScoreOfTest2;
    std::cout << std::left << std::setw(cellWidth) << std::setfill(separator) << averageScoreOfTest3 << std::endl;
    std::cout << std::left << std::setw(cellWidth) << std::setfill(separator) << "Variance";
    std::cout << std::left << std::setw(cellWidth) << std::setfill(separator) << varianceOfTest1;
    std::cout << std::left << std::setw(cellWidth) << std::setfill(separator) << varianceOfTest2;
    std::cout << std::left << std::setw(cellWidth) << std::setfill(separator) << varianceOfTest3 << std::endl;
    std::cout << "==================================================================" << std::endl;

    return 0;
}