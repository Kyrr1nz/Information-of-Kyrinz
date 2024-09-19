#include<stdio.h>
void input(int A[10][10],int &N, int &M){
	do{
		printf("Enter the rows number of the element :");
		scanf("%d",&N);
	}while(N < 0 || N >10);
	do{
		printf("Enter the columns number of the element :");
		scanf("%d",&M);
	}while(M < 0 ||  M > 10 );
		printf("Enter the number of the arrays : \n");
	for(int i = 0; i < N ; i++ ){
			for(int j = 0; j < M ; j++){
		scanf("%d",&A[i][j]);
			}
		}
		printf("\nArrrays : \n");
		for(int i = 0 ; i<N ; i++){
			for(int j = 0 ; j <M ; j++){
			
			printf(" %d ",A[i][j]);
			}
				printf("\n");
				
		}
	
	}
void minmax(int A[10][10], int M,int &N) {
	int min; 
	int max;
    min = max = A[0][0];
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
        	if(min > A[i][j])
        		min = A[i][j];
        	if(max < A[i][j])
        		max = A[i][j];
		}
    }
    printf("\nMaximum number in the maxtrix : %d", max );
	printf("\nMinimum number in the maxtrix : %d",min);
    }
    void Scalar(int A[10][10], int N, int M) {
    	 int scalar;
    printf("\nMatrix after multiplying with scalar %d:\n", scalar);
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            A[i][j] *= scalar;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
int main(){
	int N,M;
	int A[10][10];
	int min;
	int max;
	 int scalar;
	
	input(A,N,M);
	minmax(A,N,M);
	Scalar(A,N,M);
	return 0;
}
