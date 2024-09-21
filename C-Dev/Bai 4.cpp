#include<stdio.h>
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
int searchUser(int A[],int N,int X ){
	for(int i = 0; i<N ; i++){
	if(A[i]== X){
		return i;
			}
	}
		return -1;
}
void checkoddFL(int A[], int &N ){
	int i = 0;
	printf("\nThe first odd number in this Arrays is : ");
		if(A[i] %2 != 0){
			printf("\n%d",A[i]);
		
	}
	printf("\nThe last odd number in this array is : ");
	for(int i = 0 ; i<N ; i++){
		if(A[i] %2 != 0){
			printf("\n%d",A[i]);
		
		}
	
	}
}	

int main(){
	int N;
	int A[100];
	int i = 0;
	int X;
	int min = 0; int max = 0;
	int count  =0;
	int pos;
	

	input(A,N);
	printf(" \nEnter the number to find the arrays : ");
	scanf("%d",&X);
	int f=searchUser(A,N,X);
	if(f == -1 ){
		
		printf("Not found");
	}else{
		printf("Was found %d",A[f]);
		}
	checkoddFL(A, N );
	return 0;
}
