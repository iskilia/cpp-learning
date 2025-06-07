//
// Created by Isaac Kilis on 7/6/2025.
//

#include "Arrays.h"
#include <iostream>

int main() {
    // list of an array of 20 integers
    int list[20];

    // p is a pointer to an int value in memory
    int x[]  = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *p;

    p = &x[0]; // Sets pointer p the first element of the array. p = x would also accomplish the same thing.

    for (int i = 0; i < 10; i++) {
        std::cout << *p << '\n';
        p++;
    }
    return 0;
}