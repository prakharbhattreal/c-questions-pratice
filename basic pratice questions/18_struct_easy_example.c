#include <stdio.h>

// Define a structure for Student
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;

    // Taking input
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Displaying details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
