#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    
    free(ptr); // Memory is freed, but ptr still points to it

    printf("%d\n", *ptr); // Dangling pointer (UNDEFINED behavior) - if we access ptr value after free it generate arbitary values
    
    ptr = NULL; // ✅ to avoid dangling pointer do ptr =  NULL
    return 0;
}
