#include <stdio.h>

#define MAX 10 // Maximum matrix size

// Function to read a square matrix
void readMatrix(int matrix[MAX][MAX], int m, const char *name) {
    printf("Enter elements of %s matrix (%d x %d):\n", name, m, m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to compute remainder matrix
void computeRemainderMatrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int res[MAX][MAX], int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (mat2[i][j] != 0) { // Avoid division by zero
                res[i][j] = mat1[i][j] % mat2[i][j];
            } else {
                res[i][j] = 0; // Define behavior for division by zero
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[MAX][MAX], int m, const char *name) {
    printf("\n%s matrix:\n", name);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m;

    // Read matrix order
    printf("Enter the order of square matrices (M x M): ");
    scanf("%d", &m);

    // Validate matrix size
    if (m <= 0 || m > MAX) {
        printf("Invalid matrix size. Please enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    int matrix1[MAX][MAX], matrix2[MAX][MAX], remainderMatrix[MAX][MAX];

    // Read matrices
    readMatrix(matrix1, m, "First");
    readMatrix(matrix2, m, "Second");

    // Compute remainder matrix
    computeRemainderMatrix(matrix1, matrix2, remainderMatrix, m);

    // Print matrices
    printMatrix(matrix1, m, "First");
    printMatrix(matrix2, m, "Second");
    printMatrix(remainderMatrix, m, "Remainder");

    return 0;
}
