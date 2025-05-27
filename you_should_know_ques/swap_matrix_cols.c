#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows (M) and columns (N): ");
    scanf("%d %d", &m, &n);  // taking input for numbers of rows and columns required
    
    int matrix[m][n];
    printf("size of matrix is :%d\n", sizeof(matrix)/sizeof(int));  // optional print sizeof matrix

    // taking input for each element of matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // printing matrix before swapping
    printf("matrix before swapping first and last columns:\n");
    for (int i = 0; i < m; i++) {
    	for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // swapping first and last column
    for (int i = 0; i < m; i++) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][n - 1];
        matrix[i][n - 1] = temp;
    }

    // printing matrix after swapping
    printf("Modified matrix after swapping first and last columns:\n");
    for (int i = 0; i < m; i++) {
    	for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
