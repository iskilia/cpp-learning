//
// Created by Isaac Kilis on 14/6/2025.
//

#include "TemplateFunctionSortVector.h"
#include <iostream>
#include <string>

/**
 * less_than(a, b)
 * returns a < b if Type T has a lesser than copmarator
 */
template <typename T>
bool less_than(const T& a, const T& b) {
    return a < b;
}

/**
 * greater_than(a, b)
 * returns a > b if Type T has a lesser than copmarator
 */
template <typename T>
bool greater_than(const T &a, const T& b) {
    return a > b;
}

/*
* selection_sort(x, compare)
* Arranges the elements of x in an order determined
* by the compare function.
* x is a vector of T.
* compare is a function that compares the ordering of
* two Ts.
*/
template <typename T>
void selection_sort(std::vector<T> &x, bool (*compare) (const T&, const T&)) {
    int n = x.size();
    for (int i = 0; i < n; i++) {
        int small = i;
        for (int j = i + 1; j < n; j++) {
            if (compare(x[j], x[small])) {
                small = j;
           }
        }
        if (small != i) {
            std::swap(x[i], x[small]);
        }
    }
    return;
}

/*
* print
* Prints the contents of an integer vector
* x is the vector to print.
* x is not modified.
*/
template <typename T>
void print(const std::vector<T>& x) {
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
    std::vector<int> list{ 68, 29, 7, 16, 35, -57, 6, 9, 61, 19, 14};
    std::cout << "Original: ";
    print(list);
    std::cout << '\n';
    selection_sort(list, less_than<int>);
    std::cout << "Ascending: ";
    print(list);
    std::cout << '\n';
    selection_sort(list, greater_than<int>);
    std::cout << "Descending: ";
    print(list);
    std::cout << '\n';
    std::vector<std::string> words { "tree", "girl", "boy", "apple", "dog", "cat", "bird" };
    std::cout << "Original: ";
    print(words);
    std::cout << '\n';
    selection_sort(words, less_than<std::string>);
    std::cout << "Ascending: ";
    print(words);
    std::cout << '\n';
    selection_sort(words, greater_than<std::string>); std::cout << "Descending: ";
    print(words);
    std::cout << '\n';
    return 0;
}