#include <stdio.h>
#define N 5
void main(){
	int arr[10];
	int i,j , temp;
	int mid=N/2;
	for (i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	for ( i=0; i<5; i++){
		printf("%d \t", arr[i]);
	}	

		
	for ( i=0; i<mid;i++){
		temp = arr[ (N - i) -1];
		arr[(N-i)-1] = arr[i];
		arr[i] = temp;
	}
	printf("\n");
	for (int i=0; i<5; i++){
		printf("%d\t", arr[i]);
	}
}