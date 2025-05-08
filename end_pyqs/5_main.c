#include <stdio.h>

/*
    Question:
    Design a C program that reads the details of N items such as:
    - ItemCode
    - Name
    - Quantity (Qty)
    - Price

    Store them into a structure. Display the total amount in Rupees 
    worth of inventory of N items to the console.

    Example:
    Total amount worth of 3 items in Rs. is 6628
*/

struct Item {
    int itemCode;
    char name[50];
    int qty;
    float price;
};

int main() {
    int n, i;
    float total = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    // Read item details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for item %d:\n", i + 1);
        printf("Item Code: ");
        scanf("%d", &items[i].itemCode);
        printf("Item Name: ");
        scanf(" %[^\n]", items[i].name);  // Read string with spaces
        printf("Quantity: ");
        scanf("%d", &items[i].qty);
        printf("Price: ");
        scanf("%f", &items[i].price);

        total += items[i].qty * items[i].price;
    }

    // Display total worth
    printf("\nTotal amount worth of %d items in Rs. is %.2f\n", n, total);

    return 0;
}
