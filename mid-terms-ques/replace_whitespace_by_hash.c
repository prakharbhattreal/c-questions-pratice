#include <stdio.h>

// User Defined Function
void replaceSpaces(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '#';  // replacing whitespacing from #
        }
    }
}

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // Read input with spaces

    replaceSpaces(str);  // Function call to replace spaces

    printf("Modified string: %s", str);

    return 0;
}
