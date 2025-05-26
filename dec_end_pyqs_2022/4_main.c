#include <stdio.h>
#define N 5

/*
    Write a program to accept name, age and basic salary of 5 employee and calculate the
    total salary of the employee as-
    Total sal =Basie +TA+DA where TA is 15% of Basic Salary. DA is 5% of Basic Salary
    Display the information of the employees in the ascending order of their total sal
*/

typedef struct
{
    char name[50];
    int age;
    float basic;
    float total;
} Employee;

void computeTotal(Employee *e)
{
    float ta = 0.15f * e->basic;
    float da = 0.05f * e->basic;
    e->total = e->basic + ta + da;
}

void sortByTotal(Employee arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j].total > arr[j + 1].total)
            {
                Employee tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    Employee emps[N];

    // Input
    for (int i = 0; i < N; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("  Name: ");
        gets(emps[i].name);

        printf("  Age: ");
        scanf(" %d", &emps[i].age);

        printf("  Basic Salary: ");
        scanf(" %f", &emps[i].basic);

        getchar();

        // compute total salary
        computeTotal(&emps[i]);
        putchar('\n');
    }

    // Sort by total salary ascending
    sortByTotal(emps, N);

    // Display
    printf("Employees sorted by total salary (ascending):\n");
    for (int i = 0; i < N; i++)
    {
        printf("%s %d %.2f %.2f\n",
               emps[i].name,
               emps[i].age,
               emps[i].basic,
               emps[i].total);
    }

    return 0;
}