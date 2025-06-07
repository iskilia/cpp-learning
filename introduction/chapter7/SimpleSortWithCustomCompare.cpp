//
// Created by Isaac Kilis on 7/6/2025.
//

#include "SimpleSortWithCustomCompare.h"
#include <iostream>
#include <vector>

/*
* less_than(x, y)
* Returns true if x < y; otherwise, returns * false.
*/
bool less_than(int x, int y) {
    return x < y;
}

/*
* greater_than(x, y)
* Returns true if x > y; otherwise, returns
* false.
*/
bool greater_than(int x, int y) {
    return x > y;
}

/*
* selection_sort(x, compare)
* Arranges the elements of x in an order determined
* by the compare function.
* x is a vector of integers.
* compare is a function that compares the ordering of
* two integers.
*/
void selection_sort(std::vector<int>& x, bool (*compare)(int, int)) {
    int n = x.size();
    for (int i = 0; i < n - 1; i++) {
        // Note: i,small, and j represent positions within x
        // x[i], x[small], and x[j] represents the elements at
        // those positions.
        // small is the position of the smallest value we've seen
        // so far; we use it to find the smallest value less
        // than x[i]
        int small = i;
        // See if x smaller value can be found later in the vector
        for (int j = i + 1; j < n; j++)
            if (compare(x[j], x[small]))
                small = j; // Found x smaller value
        // Swap x[i] and x[small], if x smaller value was found
        if (i != small)
            std::swap(x[i], x[small]); // Uses std::swap
    }
}

/*
* print
* Prints the contents of an integer vector
* x is the vector to print.
* x is not modified.
*/
void print(const std::vector<int>& x) {
    int n = x.size();
    std::cout << '{';
    if (n > 0) {
        std::cout << x[0]; // Print the first element
        for (int i = 1; i < n; i++)
            std::cout << ',' << x[i]; // Print the rest
    }
    std::cout << '}';
}
int main() {
    std::vector<int> list{ 68, 29, 7, 16, 35, -57, 6, 9, 61, 19, 14}; std::cout << "Original: ";
    print(list);
    std::cout << '\n';
    selection_sort(list, less_than);
    std::cout << "Ascending: ";
    print(list);
    std::cout << '\n';
    selection_sort(list, greater_than);
    std::cout << "Descending: ";
    print(list);
    std::cout << '\n';
}