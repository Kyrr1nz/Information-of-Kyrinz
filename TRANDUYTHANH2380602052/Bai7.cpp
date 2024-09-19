#include<stdio.h>
void input(int S[20][30],int &N, int &M){
	do{
		printf("Enter the number of the student :");
		scanf("%d",&N);
	}while(N < 0 || N >20);
	do{
		printf("Enter the number of the courses :");
		scanf("%d",&M);
	}while(M < 0 ||  M > 30 );
	for(int i = 0; i < N; i++){
		printf("\nInput scores of student %d: \n", i);
		for(int j = 0; j < M; j++){
			printf("Input score of course %d: ", j);
			do{
				scanf("%d", &S[i][j]);
			}while(S[i][j] < 0 || S[i][j] > 10); 		
	}
} 
//		for(int i = 0 ; i<N ; i++ ){
//
//			printf("\nScore of student A[%d] is :",i);
//		}
		for(int i = 0 ; i<N ; i++){
			printf("\nScore of student A[%d] is : ",i);
			for(int j = 0 ; j < M ; j++){
			
			printf("%d  " ,S[i][j]);
			}
		}
}
void average(int S[20][30],int &N, int &M){
	float avg = 0;
	float sum = 0;
	for(int i = 0; i <N ; i++){
		sum = 0;
		for(int j = 0 ; j < M ; j++){
			sum += S[i][j];
		}
			avg = sum/M;
	printf("\nThe average score of student %d is %.2f", i, avg);
	}

}
int main() {
	int N,M;
  	int S[20][30];
  	float avg;
  	float sum;
	
//	float avg, sum;
////	int passedCourses = 0;
//
//	for(int i = 0; i < N; i++){
//		sum = 0;
//		for(int j = 0; j < M; j++){
//			sum += S[i][j];
//		}
//		avg = sum/M;
//		printf("\nThe average score of student %d is %.2f", i, avg);
//	}

	input(S,N,M);
	average(S,N,M);
	
	return 0;
}
