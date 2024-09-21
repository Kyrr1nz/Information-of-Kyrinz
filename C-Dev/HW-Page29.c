#include<stdio.h>
#include<stdlib.h>
int main(){
    int N,M;
    int *p;
    int sum = 0;
    do{
		printf("Input number of elements N and M = ");
		scanf("%d %d", &N , &M);
	}while(N>10 || M > 10);
    p = (int*) malloc(N*M*sizeof(int));
    printf("\nInput array by pointer: \n");
	for(int i = 0; i < N; i++){
        for(int j = 0; j < M;j++){
            scanf("%d", (p+i*M+j)); 
        }
	}
	printf("\nArray: \n");
	for(int i = 0; i < N; i++){
        for(int j = 0; j < M;j++){
		    printf("%d ", *(p+i*M+j));
        }
        printf("\n");
	}
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M;j++){
		    sum += *(p+i*M+j);
        }
	}
    printf("\nSum of all elements array: %d",sum);
    free(p);
    return 0;
}