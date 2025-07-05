//
// Created by Isaac Kilis on 5/7/2025.
//

#include "VirtualDestructorExample.h"
#include <iostream>

using namespace std;

class Base {
    public:
        Base() { cout << "Base" << endl; }
        virtual ~Base() { cout << "Base" << endl; } // Without the virtual definition, only the base destructor is called
};

class Derived : public Base {
    public:
        Derived() { cout << "Derived" << endl; }
        ~Derived() { cout << "Derived" << endl; }
};

int main(void) {
    Derived *d = new Derived();
    Base *b = d;
    delete b;
    getchar();
    return 0;
}