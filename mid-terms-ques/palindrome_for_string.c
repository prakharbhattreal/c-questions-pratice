#include <stdio.h>
#include <string.h>

int strPalindrome(char *ch)
{
    int len = strlen(ch);
    for (int i = 0; i < len / 2; i++)
    {
        if (ch[i] != ch[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[50];
    printf("Enter string :");
    scanf("%s", str);

    if (strPalindrome(str))
    {
        printf("%s is a plaindrome.\n", str);
    }
    else
    {
        printf("%s is not plaindrome.\n", str);
    }

    return 0;
}