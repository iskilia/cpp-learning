//
// Created by Isaac Kilis on 5/7/2025.
//

#include "RethrowExample.h"
#include <iostream>

using namespace std;

int main() {
    try {
        try {
            throw 20;
        } catch(int x) {
            cout << "Caught inner, rethrowing" << endl;
            throw; // Rethrowing an exception
        }
    } catch (int x) {
        cout << "Handle remaining" << endl;
    }
    return 0;
}