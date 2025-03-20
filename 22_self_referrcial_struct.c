#include <stdio.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;    
};

int main(){
    struct Node N1, N2, N3, N4;
    N1.prev=&N3;
    N1.data=100;
    N1.next=&N2;
    N2.prev=&N1;
    N2.data=200;
    N2.next=&N3;
    N3.prev=&N2;
    N3.data=300;
    N3.next=&N1;

    printf("%d\n", N1.data);
    printf("%d\n", N2.data);
    printf("%d\n", N3.data);

    printf("\nN1 using N2 and N3");

    // N1 using N2 and N3
    printf("%d\n", N2.prev->data);   // 100
    printf("%d\n", N3.next->data);   // 100

    printf("\nN1 using N2 and N3");

    // N1 using N2 and N3
    printf("%d\n", N1.next->data);  // 200
    printf("%d\n", N3.prev->data);  // 200

    printf("\nN1 using N2 and N3");

    // N1 using N2 and N3
    printf("%d\n", N2.next->data);  // 300
    printf("%d\n", N1.prev->data);  // 300

    printf("\n");

    // also
    printf("Also this :\n");
    printf("%d\n", N2.next->next->data);  // 100 [N1 data] n2.next target n3 then again next target n1

    return 0;
}