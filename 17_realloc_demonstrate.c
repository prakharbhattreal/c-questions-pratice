#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, newSize, i;

    // Initial memory allocation
    printf("Enter initial size of array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input for initial array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Resizing array using realloc
    printf("Enter new size of array: ");
    scanf("%d", &newSize);

    arr = (int*) realloc(arr, newSize * sizeof(int));

    // Check if reallocation was successful
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Taking input for newly allocated space if size increased
    if (newSize > n) {
        printf("Enter %d more elements:\n", newSize - n);
        for (i = n; i < newSize; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Printing the final array
    printf("Final array elements:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    // Freeing allocated memory
    free(arr);

    return 0;
}
