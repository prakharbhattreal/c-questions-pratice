#include <stdio.h>

// User-defined function to swap two numbers using pointers. This will change values at address
void swap(int *a, int *b) {
    int temp = *a;  // temp will store value of a
    *a = *b;        // a will store value of b at address of a
    *b = temp;      // b will store value of a at address of b
}

int main() { 
    int num1, num2;

    // Taking user input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Calling the swap function
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
