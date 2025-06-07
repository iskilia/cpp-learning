//
// Created by Isaac Kilis on 7/6/2025.
//

#include "PermutationsUsingStd.h"
#include <iostream>
#include <vector>
#include <algorithm>
/*
* print
* Prints the contents of an int vector
* x is the vector to print; x is not modified */
void print(const std::vector<int>& x) { int n = x.size();
    std::cout << "{";
    if (n > 0) {
        std::cout << x[0]; // Print the first element
        for (int i = 1; i < n; i++)
            std::cout << ',' << x[i]; // Print the rest
    }
    std::cout << "}";
}

int main() {
    std::vector<int> nums { 2, 4, 6, 8 };
    std::cout << "---------------\n";
    do {
        print(nums);
        std::cout << '\n';
    } // Compute the next ordering of elements
    while (next_permutation(begin(nums), std::end(nums)));
    return 0;
}