#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, *arr;
    
    // Taking input for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &N);
    
    // Allocating memory dynamically using malloc
    arr = (int*) calloc(N, sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input for array elements
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // print element of array 
    printf("array you entered: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
