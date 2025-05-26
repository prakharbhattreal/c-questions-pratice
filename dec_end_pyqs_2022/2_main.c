#include <stdio.h>

/*
    Accept a sentence from the user and capitalize the first letter of each of the words of the
    sentence. Assume the words are separated uniformly by a single space. Implement using a
    a C program.
*/

void capitalizeWords(char *str)
{
    int i = 0;
    // Capitalize the first letter of the string, if it's a letter
    if (str[0] != '\0' && (str[0] >= 'a' && str[0] <= 'z'))
    {
        str[0] = str[0] - 32;
    }

    while (str[i] != '\0')
    {
        if (str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
        {
            str[i + 1] = str[i + 1] - 32;
        }
        i++;
    }
}

int main()
{
    char sentence[1000];

    printf("Enter a sentence: ");
    gets(sentence);

    capitalizeWords(sentence);

    printf("Capitalized sentence: %s\n", sentence);
    return 0;
}