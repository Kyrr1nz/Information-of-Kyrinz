#include <stdio.h>

long Factional(int N) {
    long factional;

    if (N < 1) {
        printf("\nFactional(0) = 1");
        factional = 1;
    } else {
        printf("\nFactional(%d) = Factional(%d) * %d", N, N - 1, N);
        factional = Factional(N - 1) * N;
    }

    return factional;
}

long Sum(int N) {
    long sum;

    if (N < 1) {
        printf("\nSum(0) = 0");
        sum = 0;
    } else {
        printf("\nSum(%d) = Sum(%d) + %d", N, N - 1, N);
        sum = Sum(N - 1) + N;
    }

    return sum;
}

unsigned int Fibonacci(unsigned int N) {
    unsigned int F;
    if (N == 0 || N == 1)
        F = N;
    else
        F = Fibonacci(N - 1) + Fibonacci(N - 2);
    return F;
}

int main() {
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);

    long F = Factional(N);
    printf("\nFactional of %d is %ld", N, F);

    long S = Sum(N);
    printf("\nSum of %d is %ld", N, S);

    printf("\nSequence of Fibonacci numbers: ");
    for (int i = 0; i <= N; i++) {  
        printf("%u ", Fibonacci(i));
    }

    printf("\n");
    return 0;
}

