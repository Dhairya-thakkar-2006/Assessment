#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int rowsA, colsA, rowsB, colsB;
    int i,j,k;

    printf("Enter the number of rows and columns for the first matrix (rows cols): ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter the number of rows and columns for the second matrix (rows cols): ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Error: Number of columns in the first matrix must equal the number of rows in the second matrix.\n");

    }

    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < rowsA; ++i) {
        for (j = 0; j < colsA; ++j) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < rowsB; ++i) {
        for (j = 0; j < colsB; ++j) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < rowsA; ++i) {
        for (j = 0; j < colsB; ++j) {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < rowsA; ++i) {
        for (j = 0; j < colsB; ++j) {
            for (k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\n\n\t Resultant Matrix (A * B):\n");
    for (i = 0; i < rowsA; ++i) {
        for (j = 0; j < colsB; ++j) {
            printf("%d\t", C[i][j]); 
        }
        printf("\n");
    }

}

