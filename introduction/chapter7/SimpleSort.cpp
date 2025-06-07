//
// Created by Isaac Kilis on 7/6/2025.
//

#include "SimpleSort.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v{10, 2, 4, 6, 8, 1, 3, 5, 7};

    for (int i = 0; i < v.size(); i++) {
        int smallIndex = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[smallIndex]) {
                smallIndex = j;
            }
        }
        if (smallIndex != i) {
            //std::swap(v[i], v[smallIndex]);
            int temp = v[i];
            v[i] = v[smallIndex];
            v[smallIndex] = temp;
        }
    }

    std::cout << "Printing out sorted array" << '\n';
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << '\n';
    }
    return 0;
}