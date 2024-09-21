#include <string>
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

int search(int A[],int N,int X ){
	for(int i = 0; i<N ; i++){
	if(A[i]== X){
		return i;
			}
	}
		return -1;
}
int maxpoint(int A[],int N, int max){
max = A[100];
    for(int i = 0; i < N; i++){
        	if(max < A[i])
        		max = A[i];
	
    }
printf("\nThe number largest is : %d",max);
}
void countmax(int A[],int N){
	 int max;
		  max = A[100]; int count = 0;
    for(int i = 0; i < N; i++){
        	if(max < A[i]){
        		max = A[i];
        		}
        	}
        	
    for(int i =0 ; i<N ; i++){
        			if(A[i] == max){
        				count ++;	
					}
    
	}
        	printf("\nThe largers number has %d number ",count );		
}
int largestE(int A[],int N){
	int max;
		  max = A[100];
		  int pos = -1;
    for(int i = 0; i < N; i++){
        	if(max < A[i]){
			
        		max = A[i];
        		pos = i;
        		}
			}
        	printf("\nThe position of the largest number is A[%d]",pos);
        
}
void newArray(int A[], int &N,int X){
	int pos ;
	printf("\nAdd the element :");
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
void deleteArray(int A[], int &N, int X){
	printf("Enter the Element want to delete : ");
	scanf("%d",&X);
	for(int i = X ; i < N -1 ; i++){
	A[i] = A[i + 1];
	}
	N--;
	printf("The Arrays before deleted : ");
	for(int i = 0 ; i<N ; i++){
			printf("\n %d",A[i]);
	}
}
void checkodd(int A[], int &N ){
	printf("\nThe odd number in this Arrays is : ");
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
	int f=search(A,N,X);
	if(f == -1 ){
		
		printf("Not found");
	}else{
		printf("Was found in %d",A[f]);
		}
	maxpoint(A,N,max);
	countmax( A, N);
	largestE( A, N);
	newArray(A,N,X);
	Elementuser(A,N,X);
	deleteArray( A,N,X);
	checkodd(A,N);
	return 0;
}
