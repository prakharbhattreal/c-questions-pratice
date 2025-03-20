#include <stdio.h>

// swap two number using without pointer will not change values at address 
void swap(int a, int b) {
    int temp;
    temp=a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int num1, num2;

    // Taking user input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Calling the swap function
    swap(num1, num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}