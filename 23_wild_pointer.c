#include <stdio.h>

int main() {
    int *ptr;  // Wild pointer (not initialized)

    *ptr = 10; // Undefined behavior! Might crash the program [this may or may not work]
    printf("%d\n", *ptr);

    return 0;
}
