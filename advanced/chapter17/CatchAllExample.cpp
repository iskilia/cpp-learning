//
// Created by Isaac Kilis on 5/7/2025.
//

#include "CatchAllExample.h"
#include <iostream>

using namespace std;

int main() {
    try {
        throw 10;
    } catch(char *excp) {
        cout << "Caught" << excp << endl;
    } catch(...) {
        cout << "Default exception handling" << endl;
    }
    return 0;
}