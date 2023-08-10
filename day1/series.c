
#include <stdio.h>

void main(){

	int i , j=1;
	int sum;
	
	for (i = 0; i < 10; i=(2*j)-1){
		sum  =  sum + i ;
		printf("%d ", sum);
		j++;
	}
}
