#include<stdio.h>
#include<stdlib.h>
void input(int A[100],int &N){
	do{
		printf("Enter the number of the element :");
		scanf("%d",&N);
	}while(N < 0 || N >100);
	for(int i = 0; i < N ;i++){
	printf("Enter the number : ");
	scanf("%d",&A[i]);
	}
	printf("\nArrrays  ");
	for(int i = 0 ; i < N ; i++){
	printf("\n %d ",A[i]);
	}
	
}
// fix câu này
void newArrayEnd(int A[], int &N,int X){
	int pos ;
	printf("\nAdd the element at the End of the Arrays list :");
	scanf("%d",&X);
	for(int i = N-1 ; i >= 0;i--){
		A[i]= A[i-1];
	}
	A[N] = X;
		N++;
	printf("New element before add new number : ");
	for(int i = 0 ; i < N ; i++){
		printf("\n %d",A[i]);
	}
}

void newArray(int A[], int &N,int X){
	int pos ;
	printf("\nAdd the element at the begining of the Arrays list :");
	scanf("%d",&X);
	for(int i = N-1 ; i >= 0;i--){
		A[i+1]= A[i];
		
	}
	A[0] = X;
		N++;
	printf("New element before add new number : ");
	for(int i = 0 ; i < N ; i++){
		printf("\n %d",A[i]);
	}
}
void ElementMid(int A[], int &N,int X){
		int pos ;
		int mid;
	printf("\nAdd the element in the middle of the Arrays list :");
	scanf("%d",&X);
	pos = mid/2;
	for(int i = N-1 ; i >= pos;i--){
		A[i+1]= A[i];
	}
	A[pos] = X;
		N++;
	printf("New element before add new number : ");
	for(int i = 0 ; i < N ; i++){
		printf("\n %d",A[i]);
	}
}


void Elementuser(int A[],int &N, int X){
	int K;
	int max;
	int pos;
	printf("\nEnter the element you want :");
	scanf("%d",&X);
	printf("Enter the position you want to add : ");
	scanf("%d",&K);
	for(int i = N- 1; i >= K; i--){
		A[i+1]= A[i];
		}
		A[K] = X;
		N++;
		printf("Element before add a new number : ");
		for(int  i = 0 ; i < N ; i++){
			printf("\n %d",A[i]);
		}
	printf("\n");
}

int main(){
	int N;
	int A[100];
	int i = 0;
	int X;
	int min = 0; int max = 0;
	int count  =0;
	int pos;
	int mid;
	
	input(A,N);
    newArrayEnd(A, N,X);
	newArray(A,N,X);
	ElementMid(A,N,X);
	Elementuser(A,N,X);

	return 0;
}
