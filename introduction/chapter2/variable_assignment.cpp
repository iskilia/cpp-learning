//
// Created by Isaac Kilis on 2/6/2025.
//

#include "variable_assignment.h"
#include <iostream>

int main() {
    int a;
    a = 5;
    std::cout << a << "\n";

    // Below code will not compile since one cannot assign a literal value to a variable
    // 6 = a;

    // Initialises the variable b to value of 5
    int b(5);
    std::cout << b << "\n";

    // Initialises the variable b to value of 5
    int c = 5;
    std::cout << c << "\n";

    // Initilising d, e, f in 1 line with multiple values
    int d = 1, e, f = 3;

    int x, y;
    x = 1;
    y = 2;
    x = y; // This only assigns the value of x to the value of y at that point of time and doesn't change the memory location of x and y.
    y = 3;

    // Using constants
    const double MY_VAL = 2.998e8;
    // MY_VAL = 10 - This will fail to compile

    char ch = 'B';
    // ch = "B" will lead to a compile error since characters and strings are different.

    char ch1, ch2;
    ch1 = 128;
    ch2 = 'B';
    std::cout << ch1 << ',' << ch2 << ',' << 'B' << '\n';
    return 0;
}