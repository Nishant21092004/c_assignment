#include <stdio.h>

int main() {
    int sizeA, sizeB;

    // Input the size of array A
    printf("Enter the size of array A: ");
    scanf("%d", &sizeA);
    
    int A[sizeA];
    
    // Input elements of array A
    printf("Enter %d elements of array A in ascending order: \n", sizeA);
    for (int i = 0; i < sizeA; i++) {
        scanf("%d", &A[i]);
    }

    // Input the size of array B
    printf("Enter the size of array B: ");
    scanf("%d", &sizeB);
    
    int B[sizeB];
    
    // Input elements of array B
    printf("Enter %d elements of array B in ascending order: \n", sizeB);
    for (int i = 0; i < sizeB; i++) {
        scanf("%d", &B[i]);
    }

    // Create array C to store the merged result
    int sizeC = sizeA + sizeB;
    int C[sizeC];
    
    int i = 0, j = 0, k = 0;

    // Merge arrays A and B into C
    while (i < sizeA && j < sizeB) {
        if (A[i] <= B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // If there are remaining elements in A, copy them
    while (i < sizeA) {
        C[k++] = A[i++];
    }

    // If there are remaining elements in B, copy them
    while (j < sizeB) {
        C[k++] = B[j++];
    }

    // Print the merged array C
    printf("Merged sorted array C: \n");
    for (int i = 0; i < sizeC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
