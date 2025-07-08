//
// Created by Isaac Kilis on 8/7/2025.
//

#include "JumpSearch.h"
#include <iostream>
#include <cmath>

using namespace std;

int jumpSearch(int arr[], int target, int size) {
    int step = sqrt(size);
    int prev = 0;
    while(arr[min(step, size)-1] < target) {
        prev = step;
        step += sqrt(size);
        if (prev >= size) {
            return -1;
        }
    }

    while (arr[prev] < target) {
        prev++;
        if (prev == min(step, size)) {
            return -1;
        }
    }

    if (arr[prev] == target) {
        return prev;
    }
    return -1;
}

//
int main(void) {
    int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610 };
    int x = 55;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = jumpSearch(arr, x, n);
    (result == -1) ? cout << "Element is not present in array" << endl : cout << "Element is present at index " << result << endl;
    return 0;
}