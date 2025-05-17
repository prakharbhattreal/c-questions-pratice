/*
    Program:
    Read the names of employees of a certain organization and store them.
    Then accept a name to be searched.
    If present in the list, display "Search is successful", else "Search is unsuccessful".
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char employees[100][50], searchName[50];
    int n, found = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar();  // Clear newline after scanf

    printf("Enter names of %d emplyees :\n", n);
    for (int i = 0; i < n; i++)
    {
        gets(employees[i]);
    }

    // Read name to be searched
    printf("Enter the name to search :");
    gets(searchName);

    // Search Login
    for (int i = 0; i < n; i++)
    {
        if (strcmp(employees[i], searchName)==0)
        {
            found=1;
            break;
        }
    }
    
    // Display result
    if (found) {
        printf("Search is successful.\n");
    } else {
        printf("Search is unsuccessful.\n");
    }
}