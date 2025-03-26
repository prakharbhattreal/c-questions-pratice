#include <stdio.h>

int main() {
    int *ptr = NULL; // Null pointer - points to no where

    if (ptr == NULL) {
        printf("Pointer is NULL, cannot be dereferenced.\n");
    } else {
        printf("%d\n", *ptr); // Unsafe! Would cause a segmentation fault
    }

    return 0;
}
