#include <stdio.h>

int main()
{
    int matrix[3][3], transpose[3][3];

    printf("Enter elements of 3x3 matrix :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // finding transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Entered of the matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    printf("Transpose of the matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }
    return 0;
}