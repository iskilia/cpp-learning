//
// Created by Isaac Kilis on 8/6/2025.
//

#include "PrintPermutationsOfAVector.h"
#include <vector>
#include <iostream>

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

/* getAllPermutations(v, begin, end)
 * For the provided vector v, get all the available permutations frorm index begin to index end.
 * This will throw a runtime error if either begin or end is out of bounds of the vector.
 */
void getAllPermutations(std::vector<int>& vec, int begin, int end) {
    if (begin >= end) {
        // base case - if the indices match, then we print out the vector as is
        print(vec);
        return;
    }
    for (int i = begin; i <= end; i++) {
        // Interchange the element at the first position
        // with the element at position i
        std::swap(vec[begin], vec[i]);
        // Recursively permute the rest of the vector
        getAllPermutations(vec, begin + 1, end);
        // Interchange the current element at the first position
        // with the current element at position i
        std::swap(vec[i], vec[begin]);
    }
}

int main() {
    std::vector<int> vec{1,2,3,4,5,6,7,8,9};
    getAllPermutations(vec, 0, vec.size() - 1);
    return 0;
}
