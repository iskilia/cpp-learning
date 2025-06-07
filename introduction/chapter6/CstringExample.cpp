//
// Created by Isaac Kilis on 7/6/2025.
//

#include "CstringExample.h"
#include <iostream>

int main() {
    // CstringExample.cpp:9:18: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
    char* word = "hello!";
    for (int i = 0; i < 6; i++) {
        std::cout << word[i] << '\n';
    }
    return 0;
}
