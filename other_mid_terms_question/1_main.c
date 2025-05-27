#include <stdio.h>
#include <stdlib.h>

/*
    vector sum using array in c
*/

int main()
{
    int a, b, c;
    int v1[50] = {0}, v2[50] = {0}, v3[50] = {0};

    // taking elements in first vector
    printf("Enter number of elements in first vector :");
    scanf("%d", &a);

    printf("Enter elements of first vector :\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &v1[i]);
    }

    // taking elements in second vector
    printf("Enter number of elements in second vector :");
    scanf("%d", &b);

    printf("Enter elements of second vector :\n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &v2[i]);
    }

    // taking elements in third vector
    printf("Enter number of elements in third vector :");
    scanf("%d", &c);

    printf("Enter elements of third vector :\n");
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &v3[i]);
    }

    int x = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    int sum[x];

    for (int i = 0; i < x; i++)
    {
        sum[i] = ((i < a) ? v1[i] : 0) + ((i < b) ? v2[i] : 0) + ((i < c) ? v3[i] : 0);
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}