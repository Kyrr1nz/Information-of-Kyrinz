#include <stdio.h>

void input(int A[100], int &N) {
    do {
        printf("Enter the number of elements: ");
        scanf("%d", &N);
    } while (N < 0 || N > 100);

    for (int i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nArray elements:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void deleteEndArray(int A[], int &N) {
    N--;
    printf("\nArray after deleting the end element:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void deleteBeginArray(int A[], int &N) {
    for (int i = 0; i < N - 1; i++) {
        A[i] = A[i + 1];
    }
    N--;
    printf("\nArray after deleting the beginning element:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void deleteMiddleArray(int A[], int &N) {
    int middleIndex = N / 2;
    for (int i = middleIndex; i < N - 1; i++) {
        A[i] = A[i + 1];
    }
    N--;
    printf("\nArray after deleting the middle element:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void deleteArrayUser(int A[], int &N) {
    int position;
    do {
        printf("Enter the position to delete : ");
        scanf("%d", &position);
    } while (position < 1 || position > N);

    for (int i = position - 1; i < N - 1; i++) {
        A[i] = A[i + 1];
    }
    N--;
    printf("\nArray after deleting the element at position %d:\n", position);
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int A[100], N;
    input(A, N);

    deleteEndArray(A, N);
    deleteBeginArray(A, N);
    deleteMiddleArray(A, N);
    deleteArrayUser(A, N);

    return 0;
}
