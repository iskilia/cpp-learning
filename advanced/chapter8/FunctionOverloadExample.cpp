//
// Created by Isaac Kilis on 23/6/2025.
//

#include "FunctionOverloadExample.h"
#include <iostream>

using namespace std;

class Printer {
    public:
        void print(int i) {
            cout << "Printing integer: " << i << endl;
        }
        void print(double d) {
            cout << "Printing double: " << d << endl;
        }
        void print(const char * c) {
            cout << "Printing character: " << c << endl;
        }
};

int main(void) {
    Printer p;
    p.print(5);
    p.print("Hello C++");
    p.print(5.0);
    return 0;
}