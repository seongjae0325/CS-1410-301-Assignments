#include <iostream>

using namespace std;

int main() {
    int a, b, c, *p[3] = {&a, &b, &c};

    cout << "Enter the lengths of sides a, b, and c (c > a or b):" << endl;
    for (int i = 0; i < 3; ++i) {
        string side_name;
        switch (i) {
            case 0:
                side_name = 'a';
                break;
            case 1:
                side_name = 'b';
                break;
            case 2:
                side_name = 'c';
                break;
        }
        do {
            cout << "Enter length of side " << side_name << ": ";
            cin >> *p[i];
        } while (*p[i] <= 0);
    }

    int sum_squares_ab = (*p[0]) * (*p[0]) + (*p[1]) * (*p[1]);
    int square_c = (*p[2]) * (*p[2]);

    if (square_c == sum_squares_ab)
        cout << "The triangle is right angle." << endl;
    else if (square_c < sum_squares_ab)
        cout << "The triangle is obtuse." << endl;
    else
        cout << "The triangle is acute." << endl;

    return 0;
}