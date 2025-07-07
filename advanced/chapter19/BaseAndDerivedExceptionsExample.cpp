//
// Created by Isaac Kilis on 7/7/2025.
//

#include "BaseAndDerivedExceptionsExample.h"
#include <iostream>

using namespace std;

class Base {};
class Derived : public Base {};

int main() {
    // Correct Example:
    Derived d;
    try {
        throw d;
    } catch (Derived ex) {
        cout << "Derived exception caught" << endl;
    } catch (Base ex) {
        cout << "Base Exception caught" << endl;
    }

    // The below code will compile but the derived exception will never be caught
    /*
    BaseAndDerivedExceptionsExample.cpp:30:14: warning: exception of type 'Derived' will be caught by earlier handler [-Wexceptions]
   30 |     } catch (Derived ex) {
      |              ^
    BaseAndDerivedExceptionsExample.cpp:28:14: note: for type 'Base'
       28 |     } catch (Base ex) {
          |              ^
    1 warning generated.
    */
    Derived d2;
    try {
        throw d2;
    } catch (Base ex) {
        cout << "Base Exception caught" << endl;
    } catch (Derived ex) {
        cout << "Derived exception caught" << endl; // Never outputs
    }
    return 0;
}