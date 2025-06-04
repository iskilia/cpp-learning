//
// Created by Isaac Kilis on 4/6/2025.
//

#include "chapter4.h"
#include <iostream>

int main() {
    /*
    bool x = true, y = false;
    std::cout << "x = " << x << ", y =" << y << "\n";
    x = false;
    std::cout << "x = " << x << ", y =" << y << "\n";
    // Mix integers and Boolean
    x = 0;
    y = 1;
    std::cout << "x = " << x << ", y =" << y << "\n";
    // Assign boolean values to an integer
    int a = x, b = true;
    std::cout << "x = " << x << ", y = " << y<< ", a = " << a << ", b = " << b << '\n';
    // More mixing
    x = 1725; // Warning issued
    y = -19; // Warning issued
    std::cout << "x = " << x << ", y =" << y << "\n";

    int divided, divisor;
    std::cout << "Please provide two integers to divide: ";
    std::cin >> divided >> divisor;
    if (divisor != 0) {
        std::cout << divided << "/" << divisor << " = " << divided/divisor << '\n';
    }
    */

    int op1 = 2;
    while (op1 < 100) {
        int op2 = 2;
        while (op2 < 100) {
            if (op1 * op2 == 3731) {
                goto end;
            }
            std::cout << "Product is " << (op1 * op2) << '\n';
            op2++;
        }
        op1++;
    }

    end:
        std::cout<< "The end" << '\n';
    return 0;
}