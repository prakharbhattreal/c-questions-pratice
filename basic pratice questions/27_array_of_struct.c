#include <stdio.h>

int main(){
    struct Num
    {
        int number;
    };

    struct Num n[10];
    
    // taking input at each number field of struct created 
    for (int i = 0; i < 10; i++)
    {
        printf("Enter any Number :");
        scanf("%d", &n[i].number);
    }
    
    // printing 
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", n[i].number);
    } 
    
    return 0;
}