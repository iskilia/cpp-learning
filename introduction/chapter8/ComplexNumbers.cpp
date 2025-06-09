//
// Created by Isaac Kilis on 9/6/2025.
//

#include "ComplexNumbers.h"
#include <iostream>
#include <complex>

int main() {
    // x1 = 3 + 4i, x2 = 3 - 4i; x1 and x2 are complex conjugates
    std::complex<double> x1(3.0, 4.0), x2(3.0, -4.0);

    // Compute product by hand
    std::cout << x1 << " * " << x2 << " = " << x1.real()*x2.real() + x1.imag()*x2.real() + x1.real()*x2.imag() - x1.imag()*x2.imag() << '\n';

    // Compute by complex arithmetic
    std::cout << x1 << " * " << x2 << " = " << x1 * x2 << '\n';
    return 0;
}