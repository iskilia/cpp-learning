//
// Created by Isaac Kilis on 14/6/2025.
//

#include "ExampleFunctionTemplate.h"
#include <iostream>
#include <string>

/**
 * less_than(a, b)
 * returns a < b if Type T has a lesser than copmarator
 */
template <typename T>
bool less_than(T a, T b) {
    return a < b;
}

int main() {
    std::cout << less_than(3, 5) << '\n';
    std::cout << less_than(5, 3) << '\n';
    std::cout << less_than(3.5, 5.5) << '\n';
    std::cout << less_than(5.2, 5.3) << '\n';
    std::string word1 = "XYZ", word2 = "ABC";
    std::cout << less_than(word1, word2) << '\n';
    std::cout << less_than(word2, word1) << '\n';
    return 0;
}