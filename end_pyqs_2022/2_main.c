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
        fgets(employees[i], sizeof(employees[i]), stdin);
        size_t len = strlen(employees[i]);
        if (employees[i][len - 1] == '\n')
        {
            employees[i][len - 1] = '\0';
        }
    }

    // Read name to be searched
    printf("Enter the name to search :");
    fgets(searchName, sizeof(searchName), stdin);
    size_t len = strlen(searchName);
    if (searchName[len - 1] == '\n') {
        searchName[len - 1] = '\0'; // Remove newline
    }

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