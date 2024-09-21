#include<stdio.h>
#include<stdlib.h>

struct STUDENT {
    int passedcourse;
    int failedcourse;
};

int main(){
    struct STUDENT *S;
    int N, M;
    int **s; 
    float sum = 0;
    float avg = 0;
    int passedcourse = 0;
    int failedcourse = 0;

    do {
    	printf("Enter the number of students : ");  scanf("%d", &N);
        printf("Enter the number of courses : ");  scanf("%d", &M);

    } while(N < 0 || N > 20 ||M < 0 || M > 30 ); 
    s = (int**)malloc(N * sizeof(int*));
    
    for (int i = 0; i < N; i++) {
    	for(int j = 0 ; j < M    )
        s[i] = (int*)malloc(M * sizeof(int));
    }
    S = (struct STUDENT*)calloc(N, sizeof(struct STUDENT));

    for (int i = 0; i < N; i++) {
        printf("\nEnter the scores for student %d:\n", i + 1);
        for (int j = 0; j < M; j++) {
            do {
                printf("Score for course %d : ", j + 1);
                scanf("%d", &s[i][j]);
            } while(s[i][j] < 0 || s[i][j] > 10);
        }
    }
    printf("\n Student ");

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < M; j++) {
            sum += s[i][j];
            if (s[i][j] >= 5) {
                passedcourse++;
            } else {
            	failedcourse++;
            }
        }
        
         avg = sum / M;
        printf("\nStudent %d:\n", i + 1);
        printf("Average score: %.2f\n", avg);
        printf("Passed courses: %d\n", passedcourse);
        printf("Failed courses: %d\n", failedcourse);
    }


    free(s);


    return 0;
}

