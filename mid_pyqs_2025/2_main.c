#include <stdio.h>

/*
    matrix of size mxn, print maximum element of each column of matrix
*/

int main()
{
    int rows, cols;

    printf("Enter number of rows and columns :");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements of matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < cols; j++)
    {
        int max = matrix[0][j];
        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][j] > max)
                max = matrix[i][j];
        }
        printf("Maximum of column %d: %d\n", j + 1, max);
    }

    return 0;
}