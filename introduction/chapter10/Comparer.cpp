//
// Created by Isaac Kilis on 14/6/2025.
//

#include "Comparer.h"
#include <iostream>

template <typename T>
bool Comparer<T>::compare_impl(const T&a, const T&b) {
    return comp(a, b);
}

template <typename T>
void Comparer<T>::swap_impl(T&a, T&b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Comparer<T>::reset() {
    compare_count = swap_count = 0;
}

template <typename T>
void Comparer<T>::swap(T& a, T& b) {
    swap_count++;
    swap_impl(a, b);
}

template <typename T>
bool Comparer<T>::compare(const T& a, const T& b) {
    compare_count++;
    return compare_impl(a, b);
}

template <typename T>
int Comparer<T>::get_compare_count() const {
    return compare_count;
}

template <typename T>
int Comparer<T>::get_swap_count() const {
    return swap_count;
}

bool greater_than(const int &a, const int & b) {
    return a > b;
}

int main() {
    Comparer<int> c = Comparer<int>(greater_than);
    std::cout << c.get_compare_count() << std::endl;
    std::cout << c.compare(5, 6) << '\n';
    std::cout << c.get_compare_count() << '\n';
    return 0;
}