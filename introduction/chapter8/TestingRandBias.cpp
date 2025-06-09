//
// Created by Isaac Kilis on 9/6/2025.
//

#include "TestingRandBias.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

int main() {
    // Initialises seed value
    srand(static_cast<unsigned>(time(nullptr)));
    // Verify the largest number that rand can produce
    std::cout << "RAND_MAX = " << RAND_MAX << '\n';
    // Check how much 5 and 9995 have come up and average it out
    double total5 = 0.0, total9995 = 0.0;
    const int NUMBER_OF_TRIALS = 10;
    for (int trial = 1; trial <= NUMBER_OF_TRIALS; ++trial) {
        int count5 = 0, count9995 = 0;
        for (int i = 0; i < 1000000000; ++i) {
            int r = rand() % 10000;
            if (r == 5) {
                ++count5;
            } else if (r == 9995) {
                ++count9995;
            }
        }
        std::cout << "Trial #" << std::setw(2) << trial << " 5: " << count5 << " 9995: " << count9995 << '\n';
        total5 += count5;
        total9995 += count9995;
    }

    std::cout << "-------------------\n";
    std::cout << "Averages for " << NUMBER_OF_TRIALS << " trials: 5: "
    << total5 / NUMBER_OF_TRIALS << " 9995: "
    << total9995 / NUMBER_OF_TRIALS << '\n';
    return 0;
}