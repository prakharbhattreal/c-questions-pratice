#include <stdio.h>

/*
    copy string to another string without spaces
*/

void copyStr(char *dest, char *source)
{
    int indexCount = 0;
    for (int i = 0; source[i]!='\0'; i++)
    {
        if (source[i]!=' ')
        {
            dest[indexCount++]=source[i];
        }
    }
    dest[indexCount]='\0';
}

int main()
{
    char str1[200], str2[200];

    printf("Enter the string :");
    gets(str1);

    copyStr(str2, str1);

    printf("Input string :%s\n", str1);
    printf("Output string :%s", str2);

    return 0;
}