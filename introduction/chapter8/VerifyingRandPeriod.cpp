//
// Created by Isaac Kilis on 9/6/2025.
//

#include "VerifyingRandPeriod.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main() {
    srand(4);
    // Need to use numbers larger than regular integers; use long long ints for (long long i = 1; i < 4294967400LL; i++) {
    int r = rand();
    // Need to use numbers larger than regular integers; use long long ints
    for (long long i = 1; i < 4294967400LL; i++) {
        int r = rand();
        if (1 <= i && i <= 10)
            std::cout << std::setw(10) << i << ":" << std::setw(6) << r << '\n';
        else if (2147483645 <= i && i <= 2147483658)
            std::cout << std::setw(10) << i << ":" << std::setw(6) << r << '\n';
        else if (4294967293LL <= i && i <= 4294967309LL)
            std::cout << std::setw(10) << i << ":" << std::setw(6) << r << '\n';
    }
    return 0;
}