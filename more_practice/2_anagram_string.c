#include <stdio.h>
#include <string.h>

/*
    An anagram is a word or phrase formed by rearranging the letters of another word or phrase, using all the original letters exactly once.
    Examples of Anagrams:
    Word 1	Word 2 (Anagram)
    listen	silent
    evil	live
    race	care
    heart	earth
    dormitory	dirty room
*/

int countChar(char *str, int count[26])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        {
            char ch = (*str >= 'A' && *str <= 'Z') ? str[i] + 32 : str[i];
            count[ch-'a']++;
        }
    }
}

int areAnagrams(char *str1, char *str2)
{
    int count1[26] = {0}, count2[26] = {0};

    countChar(str1, count1);
    countChar(str2, count2);

    for (int i = 0; i < 26; i++)
    {
        if (count1[i]!=count2[i])
        {
            return 0; // means string are not anagram
        }        
    }
    return 1;  // string are anagram
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");
    return 0;
}