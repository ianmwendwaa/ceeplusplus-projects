//
// Created by Owner on 10/15/2025.
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = static_cast<int *>(malloc(5 * sizeof(int)));//allocate mem to hold 5 int elements

    // Having fun with mem reallocation to 10
    int* temp = static_cast<int *>(realloc(ptr, 10 * sizeof(int)));

    // Checking status of memory initialization
    if (ptr == nullptr) {
        std::cerr << "Failed to init mem!";
        free(ptr);
        return -1;
    }
    ptr = temp;

    // Checking status of memory reinitialization
    if (temp == nullptr) {
        std::cerr << "Failed to reinit mem!";
        free(temp);
        return -1;
    }
    for (int i = 0; i < 10; i++) {
        ptr[i] = i + 1;
        std::cout << ptr[i] << " ";
    }
    free(ptr);
    return 0;
}