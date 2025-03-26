#include <stdio.h>

// 1 way using pointer [let us C]
void toLowerCase(char *str) {
    int i=0;
    while (str[i] != '\0')
    {
        if (str[i]>=65 && str[i]<=90)
        {
            str[i] = str[i] + 32;   // according to ASCII values
        }
        i++;
    }
    
}
// 2 way using pointer [CHATGPT]
void toLowerCase2(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {  // Check if it's a lowercase letter
            *str = *str + 32;  // Convert to Lowercase (ASCII difference)
        }
        str++;  // Move to next character
    }
}

int main() {
    char str[] = "gRAPHIC ERA hILL UNIVERSITY";

    toLowerCase(str);
    // toLowerCase2(str);

    printf("Lowercase String: %s\n", str);

    return 0;
}
