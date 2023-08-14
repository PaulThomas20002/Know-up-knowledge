#include <stdio.h>

void main(){
	int i, j;

	int *p1, *p2;
	
	int arr[10];
	
	for (i=0; i<10;i++)
		arr[i] = 2*(i+1);
	p1 = arr;
	for ( i =0; i<10; i++){
		printf("2 x %d = %d\n",i+1,  *p1 );
		p1++;
	}
}