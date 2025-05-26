#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char name[100];
    int marks;

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    printf("Student Report:\n");

    while (fscanf(fp, "%s %d", name, &marks) != EOF) {
        printf("Name: %s\tMarks: %d\t", name, marks);

        if (marks >= 75)
            printf("Grade: A\n");
        else if (marks >= 60)
            printf("Grade: B\n");
        else if (marks >= 50)
            printf("Grade: C\n");
        else
            printf("Grade: FAIL\n");
    }

    fclose(fp);
    return 0;
}
