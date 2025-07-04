//
// Created by Isaac Kilis on 5/7/2025.
//

#include "UncheckedExceptions.h"
#include <iostream>

using namespace std;

// This function signature is fine by the compiler, but not recommended.
// Ideally, the function should specify all uncaught exceptions and function
// signature should be "void fun(int *ptr, int x) throw (int *, int)"
void fun(int *ptr, int x) {
    if (ptr == NULL) throw ptr;
    if (x == 0) throw x;
    /* Some functionality */
}

int main() {
    try {
        fun(NULL, 0);
    } catch(...) {
        cout << "Caught exception from fun()";
    }
    return 0;
}

/* output: Caught exception from fun() */