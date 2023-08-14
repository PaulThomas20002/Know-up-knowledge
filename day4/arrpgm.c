#include <stdio.h>

void main(){
	int a[10]={0} ,arr[10];
	int i,j;
	for (i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	for ( i=0; i<5; i++){
		printf("%d \t", arr[i]);
	}	

	j =4;
	for ( i=0; i<5;i++){
		a[i] = arr[j-i];
		
	}
	printf("\n");
	for (int i=0; i<5; i++){
		printf("%d\t", a[i]);
	}
}