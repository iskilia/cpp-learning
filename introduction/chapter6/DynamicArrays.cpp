//
// Created by Isaac Kilis on 7/6/2025.
//

#include "DynamicArrays.h"
#include <iostream>

int main() {
    int size;
    std::cout << "Enter size of array: ";
    std::cin >> size;

    // 1. Declare a pointer to the array type
    int* dynamicArray = nullptr; // Initialize to nullptr (good practice)

    // 2. Allocate the memory on the heap using new[]
    try {
        dynamicArray = new int[size];
    } catch (std::bad_alloc &e) {
        // bad_alloc is the exception type
        std::cerr << "Memory allocation failed: " << e.what() << '\n';
        return 1; // Indicate an error
    }

    // 3. Use the dynamic array and fill it in. Then print it out
    std::cout << "Enter " << size << " array elements: \n";
    for (int i = 0; i < size; i++) {
        std::cin >> dynamicArray[i];
    }

    std::cout << "Array contents:\n";
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << '\n';

    // 4. Manual resizing
    int newSize = size * 2;
    std::cout << "New array size: " << newSize << '\n';

    int* newDynamicArray = nullptr;
    try {
        newDynamicArray = new int[newSize];
    } catch (std::bad_alloc &e) {
        // bad_alloc is the exception type
        std::cerr << "Memory allocation failed: " << e.what() << '\n';
        return 1; // Indicate an error
    }

    // Copy elements from old array to new array
    for (int i = 0; i < size; ++i) {
        newDynamicArray[i] = dynamicArray[i];
    }

    // Initialize new elements (optional)
    for (int i = size; i < newSize; ++i) {
        newDynamicArray[i] = 0; // Default value
    }

    // 5. Deallocate old memory
    delete[] dynamicArray;

    // 6. Update the pointer to point to the new array
    dynamicArray = newDynamicArray;
    newDynamicArray = nullptr;
    size = newSize;
    std::cout << "New array size: " << size << '\n';
    std::cout << "Array after resizing and filling new elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << '\n';

    // 7. Deallocate memory when completely done with the array
    delete[] dynamicArray;
    dynamicArray = nullptr;
    return 0;
}