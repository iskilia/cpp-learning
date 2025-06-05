//
// Created by Isaac Kilis on 5/6/2025.
//

#include "maxAndMinExample.h"
#include <iostream>
#include <algorithm>

int main() {
    int value1, value2;
    std::cout << "Enter two integers: ";
    std::cin >> value1 >> value2;
    std::cout << std::max(value1, value2) << '\n';
    std::cout << std::min(value1, value2) << '\n';
    return 0;
}