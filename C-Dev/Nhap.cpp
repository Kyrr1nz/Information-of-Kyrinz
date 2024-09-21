#include<stdio.h>
int main(){
	int N;
	float scores[20][30];
	
	float avg, sum;
	int passedCourses = 0;
	
	do{
		printf("Input the number of students:");
		scanf("%d", &N);
	}while(N < 1 || N > 20);	
	do{
		printf("Input the number of courses:");
		scanf("%d", &M);
	}while(M < 1 || M > 30);
	for(int i = 0; i < N; i++){
		printf("\nInput scores of student %d: \n", i);
		for(int j = 0; j < M; j++){
			do{
				printf("Input score of course %d: ", j);
				scanf("%f", &scores[i][j]);
			}while(scores[i][j] < 0 || scores[i][j] > 10); 		
		}
	}
	
	for(int i = 0; i < N; i++){
		sum = 0;
		for(int j = 0; j < M; j++){
			sum += scores[i][j];
		}
		avg = sum/M;
		printf("\nThe average score of student %d is %.2f", i, avg);
	}
	
	return 0;
}
