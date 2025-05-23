#include <stdio.h>

/*
    Q - c program to compare two inputted string
*/

int compare(char *dest, char *source)
{
    while (*dest && *source)
    {
        if (*dest!=*source)
        {
            return 0;
        }
        dest++;
        source++;
    }
    return (*dest=='\0' && *source=='\0');
}

int main()
{
    char str1[100], str2[100];
    printf("Enter First String :");
    gets(str1);
    printf("Enter Second String :");
    gets(str2);

    int result = compare(str1, str2);
    if (result)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("String are not equal");
    }

    return 0;
}