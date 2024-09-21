#include<stdio.h>
#include<stdlib.h>
struct STUDENT{
//	float courses;
	float students[20][30];
	int avg= 0;
	float sum = 0;
	int passedcourse = 0;
	int failedcourse = 0;

};
int main (){
		struct STUDENT *S;
	int N,M;

	do{
		printf("Input the number of the student");
		scanf("%d",&N);
	}while(N < 0 || N> 10);
	do{
		printf("Input the number of the course : ");
		scanf("%d",&M);
	}while(M < 0 || M >10);
S = (STUDENT*)calloc(N,sizeof(STUDENT));
for(int i = 0 ; i<N ; i++){
	printf("\n Student %d ", i + 1  );
}
for(int  j= 0 ; j< M ; j++){
	do{
		printf("Input the score of the course %d : ",j + 1 );
		scanf("%f", &students[i][j]);
	}while(students[i][j] < 0 || students[i][j] > 10 );
}
for ( int i = 0; i <N ; i++){
	sum += students[i][j];
}
avg = sum/N;
printf("\n The Average of the score of the student is : ")
for(int i = 0 ; i < N; i++){
	printf("\n Student %d : \n", i +1);
	
}

free(S);
	return 0;
}
