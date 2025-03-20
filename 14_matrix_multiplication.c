#include <stdio.h>

int main()
{
    int a, b, m, n;
    printf("Enter row and column in first matrix numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter row and column in second matrix numbers: ");
    scanf("%d %d", &m, &n);

    if (b != m)
    {
        printf("Column of first matrix should match row of second matrix.\n");
    }
    else
    {
        int mt1[a][b], mt2[m][n], multi[a][n], res=0;

        printf("Enter elements of first %dX%d matrix:\n", a, b);
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                scanf("%d", &mt1[i][j]);
            }
        }

        printf("Enter elements of second %dX%d matrix:\n", m, n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &mt2[i][j]);
            }
        }

        printf("Resultant Matrix is :\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    res+=mt1[i][k]*mt2[k][j];
                }
                printf("%d ", res);
                res=0;
            }
            printf("\n");
        }
    }

    return 0;
}
