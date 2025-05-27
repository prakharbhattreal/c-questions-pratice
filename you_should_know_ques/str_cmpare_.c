#include <stdio.h>
#include <string.h>

int xStrcmp(char *a, char *b){
    while (*a && (*a == *b)) {
        a++;
        b++;
    }
    return (*a - *b)==0?1:0;  // returns 1 only if same string passes
}

int main(){
    char str1[50];
    char str2[50];

    printf("Enter first string :");
    scanf("%s", str1);
    printf("Enter second string :");
    scanf("%s", str2);

    if (xStrcmp(str1, str2))
    {
        printf("Both strings are same\n");
    }
    else{
        printf("Strings are not same\n");
    }
    
   return 0;
}