#include <stdio.h>

#define MAX 10 // Define the maximum size of the matrices

// Function to read a matrix from the user
void readMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int r1, int c1, int r2, int c2) {
    // Initializing the result matrix to zero
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Resultant matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;

    // Read the dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);
 
    // Read the dimensions of the second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible! (Number of columns in first matrix != Number of rows in second matrix)\n");
        return 0;
    }

    // Read the elements of the first matrix
    readMatrix(mat1, r1, c1);

    // Read the elements of the second matrix
    readMatrix(mat2, r2, c2);

    // Multiply the two matrices
    multiplyMatrices(mat1, mat2, result, r1, c1, r2, c2);

    // Print the result
    printMatrix(result, r1, c2);

    return 0;
}
