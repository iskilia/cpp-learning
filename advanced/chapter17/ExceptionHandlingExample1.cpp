//
// Created by Isaac Kilis on 5/7/2025.
//

#include "ExceptionHandlingExample1.h"
#include <iostream>

using namespace std;

int main() {
    int x = -1;
    cout << "Before try/catch\n";
    try {
        cout << "in try\n";
        if (x < 0) {
            throw x;
            cout << "after throw (should not be executed)\n";
        }
    } catch (int x) {
        cout << "Exception caught\n";
    }
    cout << "After try/catch\n";
    return 0;
}