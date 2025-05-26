#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int GCD = gcd(num1, num2);

    int LCM = (num1 * num2) / GCD;
    printf("LCM of %d and %d is %d\n", num1, num2, LCM);
    return 0;
}