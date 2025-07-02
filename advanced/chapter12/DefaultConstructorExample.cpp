//
// Created by Isaac Kilis on 2/7/2025.
//

#include "DefaultConstructorExample.h"
#include <iostream>

using namespace std;

class Construct{
    public:
        int a, b;
        Construct() {
            a = 100;
            b = 101;
        }
};

int main(void) {
    Construct c; // Default constructor called here
    cout << c.a << c.b <<endl;
    return 0;
}