#include <stdio.h>

/*
    Question:
    Assume STR[] = {"CALENDAR YEAR2023"}.
    Develop a C program using a pointer to:
    - Segregate the string part ("CALENDAR YEAR") and the number part ("2023")
      into two different variables.
    - Do not use any built-in string functions.
    - Display the string and the number to the output.
    - Draw a flowchart for the same.
*/

int main()
{
    char str[] = "CALENDAR YEAR2023";
    char text[50], number[20];
    char *p = str;
    int i = 0, j = 0;

    while (*p != '\0')
    {
        if (*p >= '0' && *p <= '9')
        {
            number[i++] = *p;
        }
        else
        {
            text[j++] = *p;
        }
        p++;
    }

    // Null-terminate both strings
    text[j] = '\0';
    number[i] = '\0';

    // Display results
    printf("Text Part   : %s\n", text);
    printf("Number Part : %s\n", number);
    return 0;
}