#include <stdio.h>
#include <stdlib.h>

/*
    Open a file "File1.txt" present in the
    current default path. Read the last
    200 bytes from the files and transfer it to
    another file "Chunk.txt" also present in the
    current path. Display the content of the
    chunk.txt to the standard output device.
*/

int main()
{
    FILE *f1, *f2;
    char str;
    int fileSize, start;

    f1 = fopen("File1.txt", "r");
    if (f1 == NULL)
    {
        printf("file doesn't exits");
        return 1;
    }

    fseek(f1, 0, SEEK_END);
    fileSize = ftell(f1); // ftell give size of file

    start = (fileSize > 200) ? fileSize - 200 : 0;
    fseek(f1, start, SEEK_SET);
    
    f2 = fopen("Chunk.txt", "w");
    if (f2 == NULL)
    {
        printf("file doesn't exits");
        return 1;
    }

    while ((str = fgetc(f1)) != EOF)
    {
        fputc(str, f2);
    }
    fclose(f1);
    fclose(f2);

    f2 = fopen("Chunk.txt", "r");
    if (f2 == NULL)
    {
        printf("file doesn't exits");
        return 1;
    }

    printf("Content of Chunk.txt :-\n");
    while ((str = fgetc(f2)) != EOF)
    {
        putchar(str);
    }

    fclose(f2);

    return 0;
}