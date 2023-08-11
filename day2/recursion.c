#include <stdio.h>
#include <stdlib.h>

int factN (int n ){

	if (n != 0)
		return ( n * factN(n - 1));
	else 
		return 1;
}

void main(){

	int f, n;

	printf("Input : ");
	scanf("%d", &n);

	if ( n <= 0){
		printf("\n0\n");
		exit(0);
		}
		
	f = factN(n);
	
	printf("\nFactorial : %d\n", f);
}
