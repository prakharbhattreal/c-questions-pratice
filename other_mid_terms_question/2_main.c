#include <stdio.h>

/*
    making diagonal elements of matrix equal to 0
    to make this we need to take square matrix
*/

int main()
{
    int n;

    printf("Enter size of matrix :");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Entered matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // making diagonals element is equal to 0
    for (int i = 0; i < n; i++)
    {
        matrix[i][i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        matrix[i][n - 1 - i] = 0;
    }

    printf("matrix after diagonal become 0 :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}