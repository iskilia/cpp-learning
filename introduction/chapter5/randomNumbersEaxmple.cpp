//
// Created by Isaac Kilis on 5/6/2025.
//

#include "randomNumbersEaxmple.h"
#include <cstdlib>
#include <iostream>

int main() {
    srand(23);
    for (int i = 0; i < 100; i++) {
        int r = rand();
        std::cout << r << '\n';
    }
    return 0;
}