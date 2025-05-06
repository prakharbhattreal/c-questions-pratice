#include <stdio.h>
#include <stdlib.h>

/*
    C Program to:
    - Read N floating-point numbers into an array.
    - Use a pointer to calculate their sum and average.
    - Display sum and average.
*/

int main()
{
    float *arr;
    int n, i;
    float sum = 0, avg;

    printf("Enter how many numbers (N): ");
    scanf("%d", &n);

    arr = (float *)malloc(n * sizeof(float));

    // Check if memory allocation was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program with error
    }

    // Input N numbers
    printf("Enter %d numbers :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", arr + i);
    }

    // Calculate sum using pointer
    for (i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    free(arr);
    return 0;
}