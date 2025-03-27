#include <stdio.h>
#include <stdlib.h>

// Function to reverse the array using pointers
void reverseArray(int *arr, int n) {
    int *start = arr;          // Pointer to first element
    int *end = arr + n - 1;    // Pointer to last element
    int temp;

    // Swap elements using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;  // Move start forward
        end--;    // Move end backward
    }
}

int main() {
    int n;

    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n*sizeof(int)); // Declare array

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to reverse the array
    reverseArray(arr, n);

    // Print the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
