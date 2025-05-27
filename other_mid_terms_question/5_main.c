#include <stdio.h>

/*
    swap element of first col to element of last col in matrix
*/

int main()
{
    int m, n, i, j;

    // Input matrix dimensions
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    // Declare matrix with variable size
    int matrix[m][n];

    // Input matrix elements
    printf("Enter %d x %d matrix elements:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // swapping first cols from last cols
    for (i = 0; i < m; i++)
    {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][n - 1];
        matrix[i][n - 1] = temp;
    }

    // after the swapping matrix
    printf("\nThe entered matrix after swapping is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}