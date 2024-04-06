#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    int i, max_pos, min_pos;
    float *p, max, min, arr[SIZE];
    max = -1;
    min = 11;

    cout << "Enter grades within [0, 10]:" << endl;
    for (i = 0; i < SIZE; ++i) {
        do {
            cout << "Grade " << i + 1 << ": ";
            cin >> arr[i];
        } while (arr[i] < 0 || arr[i] > 10);

        if (arr[i] > max) {
            max = arr[i];
            max_pos = i;
        }

        if (arr[i] < min) {
            min = arr[i];
            min_pos = i;
        }
    }

    cout << "Best grade: " << max << " , position " << max_pos + 1 << endl;
    cout << "Worst grade: " << min << " , position " << min_pos + 1 << endl;

    return 0;
}