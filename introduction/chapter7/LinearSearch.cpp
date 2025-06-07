//
// Created by Isaac Kilis on 7/6/2025.
//

#include "LinearSearch.h"
#include <vector>
#include <iostream>

/* linearSearch(v, seek)
 * Finds the first occurence of seek in v, and returns the index of that first occurence. If the seek value is not found
 * returns -1
 * v is the vector to search
 * seek is the value to find
 */
int linearSearch(std::vector<int> v, int seek) {
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == seek) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << linearSearch(v, 4) << ' ' <<  linearSearch(v, 11) << '\n';
}