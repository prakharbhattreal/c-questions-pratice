#include <stdio.h>
#include <string.h>

/*
    input two indexes a and b. reverse the string from index a and b
*/

void revStr(char *dest, int a, int b)
{
    int len = strlen(dest);
    if (a >= len || b >= len || a < 0 || b < 0)
    {
        printf("Index can't be greater than length of string\n");
        return;
    }

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    while (a < b)
    {
        char tempC = dest[a];
        dest[a] = dest[b];
        dest[b] = tempC;
        a++;
        b--;
    }
}

int main()
{
    char str[1000];
    int a, b;

    printf("Enter the string :");
    gets(str);

    printf("Enter the starting index :");
    scanf("%d", &a);
    printf("Enter the ending index :");
    scanf("%d", &b);

    revStr(str, a-1, b-1);

    printf("Output string :\n%s", str);

    return 0;
}