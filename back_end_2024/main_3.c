#include <stdio.h>

/*
    Write a program to store and print information of n students where information
    comprises of student's name, sno and marks in 4 subjects.
*/

struct Student {
    char name[50];
    int sno;
    float marks[4];
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter information for student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces

        printf("Enter roll number: ");
        scanf("%d", &students[i].sno);

        for (int j = 0; j < 4; j++) {
            printf("Enter marks in subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Print all student info
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].sno);
        printf("Marks: ");
        for (int j = 0; j < 4; j++) {
            printf("%.2f ", students[i].marks[j]);
        }
        printf("\n");
    }

    return 0;
}
