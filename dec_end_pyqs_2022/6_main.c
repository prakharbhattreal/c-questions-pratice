#include <stdio.h>
#include <stdlib.h>

/*
    Design a program in C that numbers each of the lines in a file. Accept N lines from the
    user and write to a file "numbered.txt" by pre-fixing a line number followed by a space to
    each of sentences of the file.
    For example: 
    1 First Sentence....
    2 Second Sentence .
    3 Third Sentence.... &soon till
*/

int main() {
    int n;
    char line[1000];

    printf("Enter the number of lines: ");
    scanf("%d", &n);
    getchar(); 

    FILE *fp = fopen("numbered.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter %d lines:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("Line %d: ", i);
        gets(line);

        // Write to file with line number
        fprintf(fp, "%d %s\n", i, line);
    }

    fclose(fp);

    printf("\nLines written to 'numbered.txt' successfully.\n");

    return 0;
}
