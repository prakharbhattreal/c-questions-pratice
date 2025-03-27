#include <stdio.h>
#include <stdlib.h> // Required for malloc()

// Function to find min and max using pointers
void findMinMax(int *arr, int n, int *min, int *max) {
    *min = *max = *arr; // Initialize min and max with first element

    for (int i = 1; i < n; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i); // Update min
        }
        if (*(arr + i) > *max) {
            *max = *(arr + i); // Update max
        }
    }
}

int main() {
    int n, *arr, min, max;

    // Read array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Allocate memory for 'n' integers using malloc
    arr = (int *)malloc(n * sizeof(int));

    // Check if malloc was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // exit the program
    }

    // Read array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i)); // Using pointer notation to read input
    }

    // Find min and max
    findMinMax(arr, n, &min, &max);

    // Print results
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    // Free allocated memory
    free(arr);

    return 0;
}
