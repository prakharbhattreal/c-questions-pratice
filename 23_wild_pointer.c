#include <stdio.h>

int main() {
    int *ptr;  // Wild pointer (not initialized) whose value is not initialized and might be pointing to some arbitary memory location

    *ptr = 10; // Undefined behavior! Might crash the program [this may or may not work]
    printf("%d\n", *ptr);

    return 0;
}
