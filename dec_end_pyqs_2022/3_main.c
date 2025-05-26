#include <stdio.h>

/*
    Design a non-recursive C function that will test whether a pattern string is the prefix of a
    test string or not. Accept the test string and the pattern string in the calling program and
    display an appropriate message to the output screen if the pattern is present or not present.
    Example:
    "ABC" is a prefix of "ABC Company", but "AABC" is not.
*/

int isPrefix(char *test, char *pattern)
{
    int i=0;
    while (pattern[i] != '\0')  
    {
        if (pattern[i]!=test[i])
        {
            return 0;  // not prefix
        }
        i++;
    }
    return 1;  // prefix
}

int main(){
    char test[1000], pattern[1000];

    printf("Enter the test string: ");
    gets(test);

    printf("Enter the pattern string: ");
    gets(pattern);

    if (isPrefix(test, pattern)) {
        printf("\"%s\" is a prefix of \"%s\".\n", pattern, test);
    } else {
        printf("\"%s\" is NOT a prefix of \"%s\".\n", pattern, test);
    }
    return 0;
}