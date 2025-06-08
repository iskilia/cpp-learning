//
// Created by Isaac Kilis on 8/6/2025.
//

#include "QuickSortHoarePartition.h"
#include <iostream>
#include <vector>

/* print(v)
 * prints a given vector v onto the console. We don't modify the vector here
 * v is the vector to print.
 */
void print(const std::vector<int>& vec) {
    std::cout << '[';
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i];
        if (i != vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << ']' << '\n';
}

/* partition(v, low, high)
 * For the provided vector, partition it by v[low] as the pivot
 * v is the vector to partition
 * low is the starting index to partition at
 * high is the ending index to partition at. We also select v[high] as a pivot
 * Returns the index of partition index
 */
int partition(std::vector<int>& v, int low, int high) {
    int pivot = v[low];
    int i = low - 1, j = high + 1;
    while (true) {
        do {
            i++;
        } while (v[i] < pivot);

        do {
            j--;
        } while(v[j] > pivot);
        if (i >= j) {
            return j;
        }
        std::swap(v[i], v[j]);
    }
}

/* quickSort(v, begin, end)
 * For the provided vector, sort it within the begin and end bounds. We recursively call this function
 * until low >= high. O(N^2) worst case. Average O(N). Worst case occurs if the array is already sorted
 */
void quickSort(std::vector<int> &v, int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);
        quickSort(v, low, pi);
        quickSort(v, pi + 1, high);
    }
}

int main() {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    print(arr);
    return 0;
}