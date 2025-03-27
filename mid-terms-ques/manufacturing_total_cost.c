#include <stdio.h>

typedef struct
{
    char name[50];
    float price;
    int quantity;
} Items;

int main()
{
    int n;
    float totalCost = 0;

    printf("Enter number of items :");
    scanf("%d", &n);

    Items items[n];

    // taking input
    for (int i = 0; i < n; i++)
    {
        printf("Enter Items Name :");
        scanf("%s", &items[i].name);
        printf("Enter Items price :");
        scanf("%f", &items[i].price);
        printf("Enter Items quantity :");
        scanf("%d", &items[i].quantity);
    }

    // calculating total cost
    for (int i = 0; i < n; i++)
    {
        totalCost += items[i].price*items[i].quantity;
    }
    
    printf("Total cost if all items is :%f\n", totalCost);

    return 0;
}
