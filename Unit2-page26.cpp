#include<stdio.h>
#include<stdlib.h>
int main(){

	int *p;
	int N;
	int sum  = 0;
	do{
		printf("Input number of elements : ");
		scanf("%d", &N);
	}while(N < 0 || N > 100);
	
	p = (int*) malloc(N*sizeof(int));
	printf("\nInput array by pointer: \n");
	for(int i = 0; i < N; i++){
		scanf("%d", (p + i)); 
	}

	printf("\n Arrays");
	for(int i = 0; i < N; i++){
		printf("%d ", *(p+i));
	
	}

	for(int i = 0; i<N ; i++){
		sum += *(p);
		p++;
	}
	printf("\n Sum of all the element : %d", sum);
    return 0;
}