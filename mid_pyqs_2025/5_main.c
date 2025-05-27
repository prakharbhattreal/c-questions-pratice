#include <stdio.h>

/*
    to check matrix is sparse matrix or not.
    sparse matrix is a matrix where most of the elements are zero.
*/

int main()
{
    int rows, cols;
    int countZero = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
            {
                countZero++;
            }
        }
    }

    int totalEle = rows * cols;

    if (countZero > totalEle / 2)
    {
        printf("The matrix is a SPARSE matrix.\n");
    }
    else
    {
        printf("The matrix is NOT a sparse matrix.\n");
    }

    return 0;
}