//
// Created by Isaac Kilis on 5/6/2025.
//

#include "clockExample.h"
#include <iostream>
#include <ctime>

int main() {
    clock_t begin = clock();
    char val;
    std::cout << "Please enter a character value: ";
    std::cin >> val;
    clock_t end = clock();
    std::cout << "Total processing time is: " << (end - begin)/CLOCKS_PER_SEC << '\n';
    return 0;
}
