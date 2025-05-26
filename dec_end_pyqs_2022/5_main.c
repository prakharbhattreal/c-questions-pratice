#include <stdio.h>
#include <stdlib.h>

/*
    Implement a C program to accept numbers using pointers. Design a function Sort that
    sorts and returns the sorted numbers in descending order using pointers. Display the sorted
    numbers in the main program.
*/

void funSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (*(arr + j) < *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int n;

    printf("Enter the number of elements :");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }

    funSort(arr, n);

    printf("Numbers in descending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    free(arr);

    return 0;
}