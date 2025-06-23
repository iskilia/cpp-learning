//
// Created by Isaac Kilis on 23/6/2025.
//

#include "ClassFunctionOverloadExample.h"
#include <iostream>

using namespace std;

class Distance {
    private:
        int feet;
        int inches;
    public:
        Distance() {
            feet = 0;
            inches = 0;
        }

        Distance(int feet, int inches) {
            this->feet = feet;
            this->inches = inches;
        }

        friend ostream& operator<<(ostream& os, const Distance& d) {
            os << "feet: " << d.feet << " inches: " << d.inches;
            return os;
        }

        friend istream& operator>>(istream& is, Distance& d) {
            is >> d.feet >> d.inches;
            return is;
        }

        Distance operator()(int a, int b, int c) {
            Distance d;
            d.feet = a + c + 10;
            d.inches = b + c + 100;
            return d;
        }
};

int main() {
    Distance D1(11, 10), D2;
    cout << "First Distance: " << D1 << endl;
    // invoke operator()
    D2 = D1(10, 10, 10);
    cout << "Second Distance after operator: " << D2 << endl;
    return 0;
}