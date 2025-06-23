//
// Created by Isaac Kilis on 23/6/2025.
//

#include "AssignmentOperatorOverloading.h"
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

    void operator=(const Distance &other) {
        this->feet = other.feet;
        this->inches = other.inches;
    }
};

int main() {
    Distance D1(11, 10), D2(5, 11);
    cout << "First Distance: " << D1 << endl;
    cout << "Second Distance: " << D2 << endl;
    // use assignment operator
    D1 = D2;
    cout << "First Distance after assignment: " << D1 << endl;
    return 0;
}