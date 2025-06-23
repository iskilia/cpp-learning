//
// Created by Isaac Kilis on 23/6/2025.
//

#include "InputAndOutputOverloadingExample.h"
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

    Distance operator-() {
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }

    bool operator<(const Distance &other) {
        if (feet < other.feet) {
            return true;
        }
        if (feet == other.feet && inches < other.inches) {
            return true;
        }
        return false;
    }
};

int main() {
    Distance D1(11, 10), D2(5, 11), D3;
    cout << "Enter the value of object : " << endl;
    cin >> D3;
    cout << "First Distance: " << D1 << endl;
    cout << "Second Distance: " << D2 << endl;
    cout << "Third Distance: " << D3 << endl;
    return 0;
}