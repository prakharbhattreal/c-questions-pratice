#include <stdio.h>

/*
    to store vowels and consonants present in a string in another different character array
*/

int main()
{
    char str[100], vowels[100], consonants[100];
    int i = 0, vowelsCount = 0, consonantsCount = 0;

    printf("Enter a string :");
    gets(str);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
                str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowels[vowelsCount++]=str[i];
            }
            else
            {
                consonants[consonantsCount++]=str[i];
            }
        }
        i++;
    }
    vowels[vowelsCount] = '\0';
    consonants[consonantsCount] = '\0';

    printf("Vowels array content :%s", vowels);
    printf("\nConsonants array content :%s", consonants);
    return 0;
}