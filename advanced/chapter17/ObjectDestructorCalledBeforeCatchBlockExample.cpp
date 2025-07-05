//
// Created by Isaac Kilis on 5/7/2025.
//

#include "ObjectDestructorCalledBeforeCatchBlockExample.h"
#include <iostream>

using namespace std;

class Test {
    public:
        Test() { cout << "Constructor of Test " << endl; }
        ~Test() { cout << "Destructor of Test " << endl; }
};

int main() {
    try {
        Test t1;
        throw 20;
    } catch(...) {
        cout << "Exception thrown" << endl;
    }
    return 0;
}

/*
output:
Constructor of Test
Destructor of Test
Exception Thrown
*/