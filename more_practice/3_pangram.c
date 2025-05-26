#include <stdio.h>

int isPangram(char *str)
{
    int count[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            char ch = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32 : str[i];
            count[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[1000];
    printf("Enter a string: ");
    gets(str);

    if (isPangram(str))
    {
        printf("The entered string is a pangram.\n");
    }
    else
    {
        printf("The entered string is not a pangram.\n");
    }

    return 0;
}