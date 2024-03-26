/*
Written by: Sungjae Hwang
Date: Mar 26, 2024
*/

/*
*** find a duplicate element in a limited range array***
*/
#include <iostream>

using namespace std;

/*
*** function to find a duplicate element in an array***
*/
int findDuplicate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return 0;
}

int main() {
/*Test cases
{1, 3,3, 4, 2};
{1, 1};
{1, 6, 5, 6, 8, 9, 3, 4, 7, 2};
{2, 1, 3, 4, 2}
*/
    int nums1[] = {1, 3, 3, 4, 2};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    cout << "Test case 1: " << findDuplicate(nums1, size1) << endl;

    int nums2[] = {1, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    cout << "Test case 2: " << findDuplicate(nums2, size2) << endl;

    int nums3[] = {1, 6, 5, 6, 8, 9, 3, 4, 7, 2};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    cout << "Test case 3: " << findDuplicate(nums3, size3) << endl;

    int nums4[] = {2, 1, 3, 4, 2};
    int size4 = sizeof(nums4) / sizeof(nums4[0]);
    cout << "Test case 4: " << findDuplicate(nums4, size4) << endl;

    int nums[] = {2, 1, 3, 4, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << "The duplicate element = ";
    cout << findDuplicate(nums, size);
    return 0;
}