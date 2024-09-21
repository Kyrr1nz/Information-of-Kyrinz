#include <stdio.h>
#include <stdlib.h>
void input(int A[100], int &N) {
    do {
        printf("Enter the number of elements: ");
        scanf("%d", &N);
    } while (N < 0 || N > 100);
    for (int i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("\nArray: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void newArrayEnd(int A[], int &N, int X) {
    printf("\nEnter the element to add at the end of the array: ");
    scanf("%d", &X);
    A[N] = X;  
    N++;   
    printf("Array after adding element at the end: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void newArray(int A[], int &N, int X) {
    printf("\nEnter the element to add at the beginning of the array: ");
    scanf("%d", &X);
    for (int i = N - 1; i >= 0; i--) {
        A[i + 1] = A[i]; 
    }
    A[0] = X;  
    N++;     
    printf("Array after adding element at the beginning: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    }
void ElementMid(int A[], int &N, int X) {
    int pos;
    printf("\nEnter the element to add in the middle of the array: ");
    scanf("%d", &X);
    pos = N / 2;
    for (int i = N - 1; i >= pos; i--) {
        A[i + 1] = A[i]; 
    }
    A[pos] = X; 
    N++;      
    printf("Array after adding element in the middle: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void Elementuser(int A[], int &N, int X) {
    int K;
    printf("\nEnter the element you want to add: ");
    scanf("%d", &X);
    printf("Enter the position where you want to add the element: ");
    scanf("%d", &K);
    if (K < 0 || K > N) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = N - 1; i >= K; i--) {
        A[i + 1] = A[i];
    }
    A[K] = X; 
    N++;       
    printf("Array after adding element at position %d: ", K);
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main() {
    int N, X;
    int A[100];
    input(A, N);         
    newArrayEnd(A, N, X); 
    newArray(A, N, X);  
    ElementMid(A, N, X); 
    Elementuser(A, N, X); 
    return 0;
}
