#include <stdio.h>
#include <stdlib.h>

/*
    Design a C program to accept N real numbers from the user, compute the average and then
    store the numbers those are above the average in another array called aboveAvg and
    below average in the array belowAvg. Display the average and content of both the arrays.
    Write the corresponding algorithm for the same.
*/

int main()
{
    int N, i, aboveCount = 0, belowCount = 0;
    float sum = 0, avg;

    printf("Enter the number of element :");
    scanf("%d", &N);

    float *arr = (float *)malloc(N * sizeof(float));
    float *aboveAvg = (float *)malloc(N * sizeof(float));
    float *belowAvg = (float *)malloc(N * sizeof(float));

    if (arr == NULL || aboveAvg == NULL || belowAvg == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read the elements
    printf("Enter %d element\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    avg = sum / N;

    // Separate into aboveAvg and belowAvg
    for (i = 0; i < N; i++)
    {
        if (arr[i] > avg)
        {
            aboveAvg[aboveCount++] = arr[i];
        }
        else if (arr[i] < avg)
        {
            belowAvg[belowCount++] = arr[i];
        }
    }

    // Display results
    printf("\nAverage: %.2f\n", avg);

    printf("Numbers above average:\n");
    for(i = 0; i < aboveCount; i++) {
        printf("%.2f ", aboveAvg[i]);
    }

    printf("\nNumbers below average:\n");
    for(i = 0; i < belowCount; i++) {
        printf("%.2f ", belowAvg[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr);
    free(aboveAvg);
    free(belowAvg);

    return 0;
}