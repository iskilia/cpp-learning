//
// Created by Isaac Kilis on 7/6/2025.
//

#include "BinarySearch.h"
#include <vector>
#include <iostream>


int binarySearch(const std::vector<int>& v, int valueToFind) {
    int low = 0;
    int high = v.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (v[mid] == valueToFind) {
            return mid;
        } else if (v[mid] < valueToFind) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    // Consider adding more test cases for odd length, even length, and empty vectors
    std::vector<int> even_list{ 2, 4, 6, 8, 10, 12, 14, 16 }, odd_list{ 2, 4, 6, 8, 10, 12, 14, 16 },
empty_list;
    std::cout << binarySearch(even_list, 4) << ' ' <<  binarySearch(even_list, 11) << '\n';
    std::cout << binarySearch(odd_list, 4) << ' ' <<  binarySearch(odd_list, 11) << '\n';
    std::cout << binarySearch(empty_list, 4) << ' ' <<  binarySearch(empty_list, 11) << '\n';
    return 0;
}