#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    int *p;
    float sum;
    do{
		printf("Input number of elements N = ");
		scanf("%d", &N);
	}while(N>100);
    p = (int*) malloc(N*sizeof(int));
    printf("\nInput array by pointer: \n");
	for(int i = 0; i < N; i++){
		scanf("%d", (p + i)); 
	}
	printf("\nArray: ");
	for(int i = 0; i < N; i++){
		printf("%d ", *(p+i));
	}
    
    for(int i = 0; i < N; i++){
		sum += (*p);
        p++;
	}
    printf("\nSum of all elements array: %.2f",sum);
    return 0;
}