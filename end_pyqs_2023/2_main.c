#include <stdio.h>
#include <string.h>

/*
    C Program to:
    - Read an entire string in lowercase or uppercase from the keyboard.
    - Replace the character at the middle of the string with 'X'.
    - If the string length is even, do nothing.
    - Display the modified string on the screen.
    - Do not use any in-built string manipulation functions except strlen().

    Example:
    Input:  PROGRAMMING
    Output: PROGRXMMING

    Input:  merchandise
    Output: merchXndise
*/

int main()
{
    char str[100];
    int len, mid;

    printf("Enter the given string :");
    gets(str);

    len = strlen(str);

    if (len % 2 == 0)
    {
        printf("Length of string is even");
    }
    else
    {
        mid = len / 2;
        str[mid] = 'X';
        printf("Modified string :%s", str);
    }

    return 0;
}
