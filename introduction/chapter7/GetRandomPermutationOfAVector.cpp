//
// Created by Isaac Kilis on 8/6/2025.
//

#include "GetRandomPermutationOfAVector.h"
#include <vector>
#include <iostream>
#include <cstdlib>

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

/*
* Returns x pseudorandom number in the range begin...end - 1, * inclusive. Returns 0 if begin >= end.
*/
int random(int begin, int end) {
    if (begin >= end)
        return 0;
    else {
        int range = end - begin;
        return begin + rand() % range;
    }
}

/* randomiseVector(vec)
 * Randomise the provided vector in place
 * vec is the vector to randomise
 */
void randomiseVector(std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        int randomIndex = rand() % vec.size();
        std::swap(vec[i], vec[random(i, vec.size())]);
    }
}

int main() {
    srand(23); //  Can set the seed any other way using ctime
    int size;
    std::cout << "Enter the size of the vector: ";
    std::cin >> size;
    std::vector<int> vec;
    for (int i = 0; i < size; i++) {
        vec.push_back(i);
    }
    std::cout << "Original vector:" << '\n';
    print(vec);
    randomiseVector(vec);
    std::cout << "Randomised vector:" << '\n';
    print(vec);
    return 0;
}


