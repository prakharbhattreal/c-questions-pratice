;
#include <stdio.h>
#include <stdlib.h>

/*
    create two 1D array, then create new array by finding intersection of two inputted array

    sample input:                                   sample output
    number of element in array 1: 4                 Element of output array (arr3):-
    element of array 1 : 2 4 6 8                    4 6 8
    number of element in array 2: 6
    element of array 2 : 3 4 6 8 9 5
*/

int main()
{
    int m, n;

    printf("Number of elements in array 1 :");
    scanf("%d", &m);

    int *arr1 = (int *)malloc(m * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    

    printf("Enter elements of array 1:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("number of columns :");
    scanf("%d", &n);

    int *arr2 = (int *)malloc(n * sizeof(int));
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for array 2 size.\n");
        free(arr1);
        return 1;
    }

    printf("Enter elements of array 2:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int *arr3 = (int *)malloc(((m > n) ? n : m) * sizeof(int));
    if (arr3 == NULL) {
        printf("Memory allocation failed.\n");
        free(arr1);
        free(arr2);
        return 1;
    }
    
    int k = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                // checking if number already exists
                int isExists = 0;
                for (int l = 0; l < k; l++)
                {
                    if (arr3[k] == arr1[i])
                    {
                        isExists = 1;
                        break;
                    }
                }
                if (!isExists)
                {
                    arr3[k++] = arr1[i];
                }
            }
        }
    }

    printf("Elements of output array (arr3) :\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", *(arr3 + i));
    }

    free(arr1);
    free(arr2);
    free(arr3);

    return 0;
}