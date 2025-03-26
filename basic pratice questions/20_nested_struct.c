#include <stdio.h>

// Defining Address struct
struct Address {
    char city[50];
    int pincode;
};

// Defining Student struct with nested Address struct
struct Student {
    char name[50];
    int roll;
    struct Address addr; // Nested struct
};

int main() {
    struct Student s1;

    // Input student details
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter city: ");
    scanf("%s", s1.addr.city);
    printf("Enter pincode: ");
    scanf("%d", &s1.addr.pincode);

    // Output student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("City: %s\n", s1.addr.city);
    printf("Pincode: %d\n", s1.addr.pincode);

    return 0;
}
