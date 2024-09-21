
#include<stdio.h>
int main(){
	int N;
	float scores[3][30];
	
//	printf("Address of scores[0]:");
//	for(int i = 0; i < 30; i++)
//		printf("\nscores[0][%d] is located at %d", i, &scores[0][i]);
//	
//	printf("\n------\n");
//	printf("Address of scores[1]:");
//	for(int i = 0; i < 30; i++)
//		printf("\nscores[1][%d] is located at %d", i, &scores[1][i]);
	
	
	float avg, sum;
	int passedCourses = 0;
	
	do{
		printf("Input the number of courses:");
		scanf("%d", &N);
	}while(N < 1 || N > 30);
	for(int i = 0; i < 3; i++){
		printf("\nInput scores of student %d: \n", i);
		for(int j = 0; j < N; j++){
			do{
				printf("Input score of course %d: ", j);
				scanf("%f", &scores[i][j]);
			}while(scores[i][j] < 0 || scores[i][j] > 10); 		
		}
	}
//	for(int i = 0; i < N; i++){
//		printf("\nScore of course %d is %.2f", i, scores[i]);
//	}
//	sum = 0;
//	for(int i = 0; i < N; i++){
//		sum += scores[i];
//	}
//	avg = sum/N;
//	printf("\nThe average score of Alice is %.2f", avg);
//	
//	passedCourses = 0;
//	for(int i = 0; i < N; i++){
//		if(scores[i] >= 5)
//			passedCourses++;
//	}
//	printf("\nAlice has passed %d out of %d courses", passedCourses, N);
	
	return 0;
}
