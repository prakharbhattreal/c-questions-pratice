#include <stdio.h>
#include <string.h>

/*
    design a C program
    to accept a string from the user than call a
    function 'Replace' that replaces all the
    vowels present in the passed string with
    capital 'X' and then print the modified
    string in the calling program. Implement
    using a pointer .
*/

void replace(char *dest)
{
    while (*dest != '\0')
    {
        if (*dest == 'a' || *dest == 'A' || *dest == 'i' || *dest == 'I' || *dest == 'e' || *dest == 'E' || *dest == 'o' || *dest == 'O' || *dest == 'u' || *dest == 'U')
        {
            *dest = 'X';
        }
        dest++;
    }
}

int main()
{
    char str[100];

    printf("Enter a string :");
    gets(str);

    // calling function
    replace(str);

    printf("New string :%s", str);

    return 0;
}