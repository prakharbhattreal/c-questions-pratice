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
    char str1[]= "apple";
    char str2[] = "apple";
    printf("%d", xStrcmp(str1,str2));
   return 0;
}