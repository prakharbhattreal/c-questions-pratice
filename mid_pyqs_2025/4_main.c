#include <stdio.h>

/*
    matrix of m x n. input two rows index and interchange elements of both
*/

int main()
{
    int m, n, index1, index2;

    printf("number of rows :");
    scanf("%d", &m);
    printf("number of columns :");
    scanf("%d", &n);

    int matrix[m][n];

    printf("Enter elements of matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("First Index :");
    scanf("%d", &index1);
    printf("Second Index :");
    scanf("%d", &index2);

    for (int i = 0; i < n; i++)
    {
        int temp = matrix[index1][i];
        matrix[index1][i] = matrix[index2][i];
        matrix[index2][i] = temp;
    }
    
    printf("Final Matrix after inchange :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}