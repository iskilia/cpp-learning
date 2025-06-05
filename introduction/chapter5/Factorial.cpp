//
// Created by Isaac Kilis on 5/6/2025.
//

#include "Factorial.h"
#include <iostream>

int factorial(int n) {
    if (n <= 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    std::cout << factorial(10) << '\n';
    return 0;
}