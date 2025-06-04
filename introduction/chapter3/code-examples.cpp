//
// Created by Isaac Kilis on 4/6/2025.
//

#include "code-examples.h"
#include <iostream>

int main() {
    int val1, val2, sum;
    std::cout << "Enter two numbers: ";
    std::cin >> val1 >> val2;
    sum = val1 + val2;
    std::cout << sum << '\n';

    // widening
    int x = 2;
    double y = 8.1, sum;
    sum = x + y;

    // narrowing
    double d1;
    int i1 = 100;
    d1 = i1;

    // Below will be a compile warning (warning C4244 - conversino from 'double' to 'int' possible loss of data.
    // below is narrowing

    double d = 2.9
    int I = d;
    return 0;


    // Runtime Error Example
    int dividend, divisor;
    // Get two ints from the user
    std::cout << "Please enter two integers to divide";
    std::cin >> divided >> divisor;
    // divide them and report result
    std::cout << dividend << '/' << divisor << '=' << dividend/divisor << '\n'

    // Calculating Degrees F example
    double degreesC, degreesF;
    // Prompt user for temperature to context
    std::cout << "Enter the temperature in degrees C: ";
    // Read users input
    std::cin >> degreesC;
    // Perform the conversion
    degreesF = (degreesC * (9/5)) + 32;
    // Report the result
    std::cout << degreesF << '\n';

    int hours, minutes, seconds;
    std::cout << "Enter the number of seconds you want to convert: ";
    std::cin >> seconds;

    // 3600 seconds is 1 hour
    hours = seconds / 3600;

    // Compute the remaining seconds after the hours are accounted for
    seconds = seconds % 3600;

    // 60 seconds in a minute
    minutes = seconds / 60;

    // Compute remaining seconds after the minutes are accounted for
    seconds = seconds % 60;

    // Report the results
    std::cout << hours << "hr" << minutes << "min" << seconds << "sec\n";
    return 0;
}
