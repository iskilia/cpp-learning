//
// Created by Isaac Kilis on 8/7/2025.
//

#include "SelectionSort.h"
#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            swap(&arr[minIndex], &arr[i]);
        }
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
    selectionSort(arr, n);
    cout<<"Sorted array: \n"; printArray(arr, n);
    return 0;
}
