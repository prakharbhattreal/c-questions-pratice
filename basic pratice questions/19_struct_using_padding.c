#include <stdio.h>

// Defining a struct with different data types
struct PaddedStruct {
    char a;     // 1 byte
    int b;      // 4 bytes (but needs alignment)
    char c;     // 1 byte
};

int main() {
    struct PaddedStruct s;
    s.a=7;
    printf("%d\n", s.a);

    printf("Size of struct: %lu bytes\n", sizeof(s));

    return 0;
}
