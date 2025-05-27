#include <stdio.h>
#include <string.h>

// Replace whitespaces with '#'

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '#';
        }
    }

    printf("Modified string: %s\n", str);
    return 0;
}