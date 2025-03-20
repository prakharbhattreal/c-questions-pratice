#include <stdio.h>
  
int main(){

    // 1 way good but  some bug
    // char ch[] = "Graphic Era Hill University";
    // int i;
    // for (i = 0; ch[i] != '\0'; i++) {
    //     if (ch[i] == ' ') {
    //         printf("\n");  // Move to a new line when space is found
    //     } else {
    //         printf("%c", ch[i]);  // Print characters normally
    //     }
    // }

    // 2 way if there is more than one whitespace
    char ch2[] = "Graphic Era Hill         University";
    int a, spaceFlag = 0;

    for (a = 0; ch2[a] != '\0'; a++) {
        if (ch2[a] == ' ') {
            if (spaceFlag == 0) {  // Print newline only for the first space
                printf("\n");
                spaceFlag = 1;  // Set flag to avoid multiple newlines
            }
        } else {
            printf("%c", ch2[a]);  // Print characters normally
            spaceFlag = 0;  // Reset flag when a non-space character is found
        }
    }
    
    return 0;
}