#include <stdio.h>


void input(int A[10][10], int B[10][10], int *N, int *M) {
    do {
        printf("Enter the number of rows: ");
        scanf("%d", N);
    } while (*N <= 0 || *N > 10);

    do {
        printf("Enter the number of columns: ");
        scanf("%d", M);
    } while (*M <= 0 || *M > 10);

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < *N; i++) {
        for (int j = 0; j < *M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < *N; i++) {
        for (int j = 0; j < *M; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrix A:\n");
    for (int i = 0; i < *N; i++) {
        for (int j = 0; j < *M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < *N; i++) {
        for (int j = 0; j < *M; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}


void sum(int A[10][10], int B[10][10], int N, int M, int sumAB[10][10]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sumAB[i][j] = A[i][j] + B[i][j];
        }
    }
}


void printMatrix(int matrix[10][10], int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, M;
    int A[10][10];
    int B[10][10];
    int sumAB[10][10];

    input(A, B, &N, &M);
    sum(A, B, N, M, sumAB);

    printf("\nSum of two matrices is:\n");
    printMatrix(sumAB, N, M);

    return 0;
}

