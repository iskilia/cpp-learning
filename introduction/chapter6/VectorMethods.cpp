//
// Created by Isaac Kilis on 7/6/2025.
//

#include "VectorMethods.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec;

    for (int i = 0; i < 10; i++) {
       vec.push_back(i);
    }

    vec.pop_back();

    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec.at(i) << '\n';
    }
    // vec.at(11) - throws runtime error;
    std::cout << vec.empty() << '\n';

    vec.clear();

    // multi-dimension vectors
    // The below line initialises vec2 as a 2 (rows) by 3 (columns) multi dimensional vector
    std::vector<std::vector<int>> vec2(2, std::vector<int>(3));
    return 0;
}
