//
// Created by Owner on 10/15/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocating memory to store 5 integers in an array
    int* ptr = malloc(5 * sizeof(int));

    int* temp = realloc(ptr, 10* sizeof(int));
    if (ptr == NULL) {
        printf("Memory init failed!");
        free(ptr);
        exit(0);
    }
    ptr = temp;

    for (int i = 0; i < 10; i++) {
        ptr[i] = i + 1;
    }

    // Print the elements
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }

    free(temp);
    return 0;
}
