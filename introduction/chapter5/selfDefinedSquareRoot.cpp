//
// Created by Isaac Kilis on 5/6/2025.
//

#include "selfDefinedSquareRoot.h"
#include <iostream>
#include <iomanip>
#include <cmath>

/** squareRoot(x)
 *  Computes the approximate square root of x
 *  x is the double value to calculate the square root of
 *  Returns the approximate square root of x
 */
double squareRoot(double x) {
    double diff = -INFINITY;
    double root = 1;
    while(diff > 0.0001 || diff < -0.0001) {
        root = (root + x/root) / 2.0;
        std::cout << "root is " << root << '\n';
        diff = root * root - x;
    }
    return root;
}

int main() {
    for (double d = 1.0; d <= 10.0; d += 0.5) {
        std::cout << std::setw(7) << squareRoot(d) << ':' << sqrt(d) << '\n';
    }
    return 0;
}