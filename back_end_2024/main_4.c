#include <stdio.h>
#include <stdlib.h>

/*
    Write a program to copy the contents of a file to a new fresh file.
*/

int main()
{
    FILE *f1, *f2;
    int ch;
    f1 = fopen("file1.txt", "r");
    if (f1 == NULL)
    {
        printf("File Doesn't exits");
        fclose(f1);
        exit(1);
    }
    f2 = fopen("file2.txt", "w+");
    if (f2 == NULL)
    {
        printf("File Doesn't exits");
        exit(1);
    }
    while ((ch = fgetc(f1)) != EOF)
    {
        fputc(ch, f2);
    }
    printf("File copied successfully.\n");
    fclose(f1);
    fclose(f2);

    return 0;
}