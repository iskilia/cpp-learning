//
// Created by Isaac Kilis on 7/7/2025.
//

#include "Example2.h"
#include <iostream>
using namespace std;
class MyExcept1 {};
class MyExcept2{
public:
    // Conversion constructor
    MyExcept2 (const MyExcept1 &e ) {
        cout << "Conversion constructor called";
    }
};

int main() {
    try {
        MyExcept1 e;
        throw e;
    } catch(MyExcept2 e2) {
        cout << "Caught MyExcept2 " << endl;
    } catch(...) {
        cout << " Default catch block " << endl;
    }
    return 0;
}