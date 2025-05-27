#include <stdio.h>
#include <stdlib.h>

// maximun and minimum in array of size N using pointer

int main()
{
    int N;

    printf("Enter the size of array :");
    scanf("%d", &N);

    int *arr = (int *)malloc(N * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the element of array :\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    printf("Maximum element in array is :%d\n", *(arr + N - 1));
    printf("Minimum element in array is :%d\n", *(arr));

    return 0;
}