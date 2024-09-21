#include <stdio.h>
#include <stdlib.h>

typedef struct STUDENT {
    float *scores;  
    float average;  
    int passed;     
    int failed;     
} STUDENT;

int main() {
    STUDENT *students;
    int N, M;
    do {
        printf("Input number of students (1-20): ");
        scanf("%d", &N);
    } while (N < 1 || N > 20);

    do {
        printf("Input number of courses (1-30): ");
        scanf("%d", &M);
    } while (M < 1 || M > 30);
    students = (STUDENT *)malloc(N * sizeof(STUDENT));
    for (int i = 0; i < N; i++) {
        students[i].scores = (float *)malloc(M * sizeof(float));
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < M; j++) {
            do {
                printf("Input score for course %d: ", j + 1);
                scanf("%f", &students[i].scores[j]);
            } while (students[i].scores[j] < 0 || students[i].scores[j] > 10);
        }
    }

    for(int i = 0 ; i < N;i++){
        float sum = 0;
        for(int j = 0; j< M; j++){
            sum += students[i].scores[j];
        }
        students[i].average = sum/M;
    }
    
    for (int i = 0; i < M; i++) {
        students[i].passed = 0;
        students[i].failed = 0;
        for(int j = 0; j < M;j++){
            if (students[i].scores[j] >= 5) {
                students[i].passed++;
            } else {
                students[i].failed++;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Average score: %.2f\n", students[i].average);
        printf("Number of passed courses: %d\n", students[i].passed);
        printf("Number of failed courses: %d\n", students[i].failed);
    }
    
    free(students);
    return 0;
}
