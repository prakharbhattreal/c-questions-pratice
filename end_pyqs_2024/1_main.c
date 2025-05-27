#include <stdio.h>

/*
    Write a program in C to remove all whitespaces in a String and print it on
    the screen. For example given the following string as
    input: Keep Learning Dear Students" and the program should
    generate: "KeepLearningDearStudents" as output 
*/

void removeWhitespaces(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]!=' ')
        {
            str[count++]=str[i];
        }
    }
    str[count]='\0';
}

int main()
{
    char str[100];

    printf("Enter the string :");
    gets(str);

    removeWhitespaces(str);

    printf("Output String :%s", str);

    return 0;
}