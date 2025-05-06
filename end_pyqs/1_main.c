// Design a UDF 'SubStr' that returns a sub-string through its argument to the calling program by taking the starting position and ending position as arguments to the function. Display the sub-string in the calling program.

#include <stdio.h>
#include <string.h>

void SubStr(const char* source, int start, int end, char* result) {
    int i, j = 0;

    if (start < 1 || end > strlen(source) || start > end) {
        result[0] = '\0';  // Return empty string for invalid input
        return;
    }

    for (i = start - 1; i <= end - 1; i++) {
        result[j++] = source[i];
    }
    result[j] = '\0';  // Null-terminate the result
}

int main() {
    char str[100], sub[100];
    int start, end;

    printf("Enter the string: ");
    gets(str);

    printf("Enter starting position: ");
    scanf("%d", &start);

    printf("Enter ending position: ");
    scanf("%d", &end);

    SubStr(str, start, end, sub);

    printf("The substring is: %s\n", sub);

    return 0;
}
