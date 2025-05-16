#include <stdio.h>

int main() {
    int NUM[] = {-111, 555, -333, 222, -444};
    int n = sizeof(NUM) / sizeof(NUM[0]);
    int *ptr = NUM;  // Pointer to the first element of the array

    // Modify only negative values
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) < 0) {
            *(ptr + i) += 50;
        }
    }

    // Print the updated array
    printf("Updated NUM array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", NUM[i]);
    }
    printf("\n");

    return 0;
}
