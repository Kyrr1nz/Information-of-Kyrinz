#include <stdio.h>
#include <stdlib.h>
int main() {
    int M, N;
    int **matrix;
    int sum = 0;
    do {
        printf("Nhap kich thuoc ma tran M, N (M, N <= 10): ");
        scanf("%d %d", &M, &N);
    } while (M < 0 || M > 10 || N < 0 || N > 10);
    matrix = (int**)malloc(M * sizeof(int*));
    for (int i = 0; i < M; i++) {
        matrix[i] = (int*)malloc(N * sizeof(int));
    }
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            sum += matrix[i][j];
        }
    }
    printf("Tong cua cac phan tu: %d\n", sum);
    for (int i = 0; i < M; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
