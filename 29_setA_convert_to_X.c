#include <stdio.h>
#include <string.h>

int main(){
    char ch[100]="PROGRAMMING";
    // char ch[100]="merchandise";

    if (strlen(ch)%2!=0)
    {
        int mid=strlen(ch)/2;
        ch[mid]='X';
    }
    
    printf("%s\n", ch);
    
    return 0;
}