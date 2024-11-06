#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], matrix3[3][3];
    int i, j;

    // Input first 3x3 matrix
    printf("Enter the elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second 3x3 matrix
    printf("Enter the elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding the two matrices and storing in matrix3
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result (matrix3)
    printf("The resulting 3x3 matrix after addition is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
