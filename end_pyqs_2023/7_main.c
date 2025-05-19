#include <stdio.h>

/*
    Question:
    Open a file "Data.txt" present in the current default path with file pointer set at
    50 bytes offset from the beginning of the file. Read the next 100 characters
    from that position and display them in uppercase to the standard output
    using a user-defined function (UDF) to convert to uppercase.
*/

// User-Defined Function to convert character to uppercase
char toUpperCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
    }
    return ch;
}

int main()
{
    FILE *fp;
    char str; 
    int count = 0;

    // file opening
    fp = fopen("Data.txt", "r");

    if (fp == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    fseek(fp, 50, SEEK_SET);

    printf("Output (Uppercase):\n");

    // Read next 100 characters using fgetc()
    while (count < 100 && (str = fgetc(fp)) != EOF) {
        putchar(toUpperCase(str));
        count++;
    }

    // Close file
    fclose(fp);
    return 0;
}