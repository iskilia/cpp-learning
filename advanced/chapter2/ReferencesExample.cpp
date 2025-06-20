//
// Created by Isaac Kilis on 16/6/2025.
//

#include "ReferencesExample.h"
#include <iostream>

using namespace std;

int main() {
    int i;
    double d;
    int & r1 = i;
    double & r2 = d;
    i = 5;
    cout << "Value of i : " << i << endl; // 5 is outputted
    cout << "Value of i reference : " << r1 << endl; // 5 is outputted
    d = 11.7;
    cout << "Value of d : " << d << endl; // 11.7 is outputted
    cout << "Value of d reference : " << r2 << endl; // 11.7 is outputted
    i = 6;
    cout << "Value of i2 : " << i << endl; // 6 is outputted
    cout << "Value of i2 reference : " << r1 << endl; // 6 is outputted
    return 0;
}