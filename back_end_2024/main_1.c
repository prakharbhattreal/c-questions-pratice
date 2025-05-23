#include <stdio.h>

/*
    Write a C program to count no of vowels, consonants, digits and special characters
    in a string.
*/

int main()
{
    char str[100];
    printf("Enter a string :");
    gets(str);
    int i = 0, vowels = 0, consonants = 0, digits = 0, specialChar = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
                str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowels += 1;
            }
            else
            {
                consonants += 1;
            }
        }

        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits += 1;
        }
        else if(str[i]!='\n')
        {
            specialChar += 1;
        }
        i++;
    }

    printf("The number of vowels :%d\n", vowels);
    printf("The number of consonants :%d\n", consonants);
    printf("The number of digits :%d\n", digits);
    printf("The number of specialCharacter :%d\n", specialChar);

    return 0;
}