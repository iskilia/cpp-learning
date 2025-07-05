//
// Created by Isaac Kilis on 5/7/2025.
// Only need to do as necessary, a virtual destructor is enough
//

#include "PureVirtualDestructorExample.h"
#include <iostream>

using namespace std;

class Base {
    public:
        virtual ~Base() = 0; //  Pure Virtual Destructor
};

Base::~Base() {
    cout << "Base::~Base() - pure virtual destructor called" << endl;
}

class Derived: public Base {
    public:
        ~Derived() {
            cout << "Derived::~Derived() called" << endl;
        }
};

int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}