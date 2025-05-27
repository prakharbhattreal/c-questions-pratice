#include <stdio.h>
#include <string.h>

/*
    string by converting digits into words
*/

void printDigitWords(char digit)
{
    switch (digit)
    {
    case '0':
        printf("zero ");
        break;
    case '1':
        printf("one ");
        break;
    case '2':
        printf("two ");
        break;
    case '3':
        printf("three ");
        break;
    case '4':
        printf("four ");
        break;
    case '5':
        printf("five ");
        break;
    case '6':
        printf("six ");
        break;
    case '7':
        printf("seven ");
        break;
    case '8':
        printf("eight ");
        break;
    case '9':
        printf("nine ");
        break;
    default:
        printf("?"); // Non-digit character
    }
}

int main()
{
    char pincode[50];

    printf("Enter the pincode in digits :");
    gets(pincode);

    printf("Pincode of my city is ");
    for (int i = 0; i < strlen(pincode); i++)
    {
        printDigitWords(pincode[i]);
    }

    return 0;
}