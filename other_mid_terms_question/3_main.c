#include <stdio.h>

// if the character is in uppercase convert it into lowercase and vice-versa

int main(){
    char str[100];
    int i = 0;

    printf("Enter the string :");
    gets(str);

    while (str[i]!='\0')
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("Output string :%s", str);    

    return 0;
}