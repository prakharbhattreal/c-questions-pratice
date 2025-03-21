#include <stdio.h>

int main(){
    char ch[100]="mountaineering";
    for (int i = 0; ch[i]!='\0'; i++)
    {
        if (i%2==0)
        {
            if (ch[i]>=97 && ch[i]<=122)
            {
                ch[i]=ch[i]-32;
            }
        }
    }
    printf("%s\n", ch);
    
    return 0;
}