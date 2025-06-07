//
// Created by Isaac Kilis on 6/6/2025.
//

#include "VectorExample.h"
#include <vector>
#include <iostream>

int main() {
    /* Ways to declare and initialise a vector */
    std::vector<int> vec_x;
    std::vector<int> vec_y(10);
    std::vector<int> vec_z(10, 1);
    std::vector<int> vec_w{5, 10, 15, 25};


    /* Traversing a vector */
    std::vector<int> vec_x2(1000);
    // Forward
    for (int i = 0; i < 1000; i++) {
        vec_x2[i] = i + 1;
    }

    // backward
    for (int i = 999; i >= 0; i--) {
        std::cout << vec_x2[i] << '\n';
    }

    // Now taking in inputs from a user
    const int NUM_ENTRIES = 5;
    std::vector<int> input_numbers(NUM_ENTRIES);
    std::cout << "Please input " << NUM_ENTRIES << " numbers: ";
    for (int i = 0; i < NUM_ENTRIES; i++) {
        std::cin >> input_numbers[i];
    }

    for (int i = 0; i < NUM_ENTRIES; i++) {
        std::cout << input_numbers[i] << '\n';
    }
    return 0;
}