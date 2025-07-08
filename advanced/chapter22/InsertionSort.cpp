//
// Created by Isaac Kilis on 8/7/2025.
//

#include "InsertionSort.h"
#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/* Function to print an array */
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " "; cout << endl;
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    cout<<"Sorted array: \n"; printArray(arr, n);
    return 0;
}