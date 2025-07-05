//
// Created by Isaac Kilis on 5/7/2025.
//

#include "StackUnwindingExample.h"
#include <iostream>

using namespace std;

void f1() throw (int) {
    cout<<"\n f1() Start ";
    throw 100;
    cout<<"\n f1() End ";
}

void f2() throw (int) {
    cout<<"\n f2() Start ";
    f1();
    cout<<"\n f2() End ";
}

void f3() {
    cout<< "\n f3() Start ";
    try {
        f2();
    } catch(int i) {
        cout<<"\n Caught Exception: "<<i;
    }
    cout << "\n f3() End";
}

int main() {
    f3();
    getchar();
    return 0;
}

/*
output:
f3() start
f2() start
f1() start
Caught exception 100
f3() end
*/