#include <stdio.h>
#include <string.h>

#define MAX_LINE 1024  // Maximum line size

int main() {
    FILE *fp = fopen("sample.txt", "r");
    char line[MAX_LINE];
    char searchTerm[] = "OpenAI";  // String to search for
    int lineNumber = 0;
    int found = 0;
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        lineNumber++;
        if (strstr(line, searchTerm) != NULL) {
            printf("Found '%s' on line %d: %s", searchTerm, lineNumber, line);
            found = 1;
        }
    }

    if (!found) {
        printf("The term '%s' was not found in the file.\n", searchTerm);
    }

    fclose(fp);
    return 0;
}
