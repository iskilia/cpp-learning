//
// Created by Isaac Kilis on 7/7/2025.
//

#include "Example1.h"
#include <iostream>

using namespace std;

class Test {
    public:
        Test() { cout << "Constructor called" << endl; }
        ~Test() { cout << "Destructor called" << endl; }
};

int main(void) {
    try {
        Test t1;
        throw 10;
    } catch (int e) {
        cout << "Caught " << e << endl;
    }
    return 0;
}

/*
Output:
Constructor called
Destructor called
Caught 10
*/