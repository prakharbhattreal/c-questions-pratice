#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    
    int size = sizeof(arr) / sizeof(arr[0]);  // Total size / size of one element

    printf("Size of array: %d\n", size);

    return 0;
}
