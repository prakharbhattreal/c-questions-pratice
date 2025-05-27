#include <stdio.h>

// Function to calculate modulus and product
void calculateModulusAndProduct(int a, int b, int *modulus, int *product) {
    *modulus = a % b;   // Compute modulus
    *product = a * b;   // Compute product
}

int main() {
    int num1, num2, mod, prod;

    // User input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call with pointers
    calculateModulusAndProduct(num1, num2, &mod, &prod);

    // Display results
    printf("Modulus: %d\n", mod);
    printf("Product: %d\n", prod);

    return 0;
}
