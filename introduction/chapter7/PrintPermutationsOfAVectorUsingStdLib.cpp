//
// Created by Isaac Kilis on 8/6/2025.
//

#include "PrintPermutationsOfAVectorUsingStdLib.h"
#include <vector>
#include <iostream>
#include <algorithm>

/* print(v)
 * prints a given vector v onto the console. We don't modify the vector here
 * v is the vector to print.
 */
void print(const std::vector<int>& vec) {
    std::cout << '[';
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i];
    }
    std::cout << ']' << '\n';
}

int main() {
    int size;
    std::cout << "Enter the size of the vector: ";
    std::cin >> size;
    std::vector<int> vec;
    for (int i = 0; i < size; i++) {
        vec.push_back(i);
    }
    do {
        print(vec);
    } while(std::next_permutation(vec.begin(), vec.end()));
    return 0;
}