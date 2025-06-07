//
// Created by Isaac Kilis on 7/6/2025.
//

#include "RandomlyPermute.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

/*
* print
* Prints the contents of an int vector
* x is the vector to print; a is not modified
*/
void print(const std::vector<int>& x) {
    int n = x.size();
    std::cout << "{";
    if (n > 0) {
        std::cout << x[0]; // Print the first element
        for (int i = 1; i < n; i++)
            std::cout << ',' << x[i]; // Print the rest
    }
    std::cout << "}";
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
/*
* Randomly permute x vector of integers.
* x is the vector to permute, and n is its length.
*/
void permute(std::vector<int>& x) {
    int n = x.size();
    for (int i = 0; i < n - 1; i++) {
        // Select a pseudorandom location from the current
        // location to the end of the collection
        std::swap(x[i], x[random(i, n)]);
    }
}

// Tests the permute function that randomly permutes the // contents of x vector
int main() {
    // Initialize random generator seed
    srand(static_cast<int>(time(0)));
    // Make the vector {2, 4, 6, 8, 10, 12 14 16}
    std::vector<int> vec { 2, 4, 6, 8, 10, 12, 14, 16 };
    // Print vector before
    print(vec);
    std::cout << '\n';
    permute(vec);
    // Print vector after
    print(vec);
    std::cout << '\n';
}