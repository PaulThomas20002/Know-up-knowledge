#include <stdio.h>

int isPrime(int n){

	int flag;
	
	for ( int i = 2; i <= n/2; i++)
		if ( n%i == 0){
			return 0;			
		}
	return 1;
}

void main(){
	int n;
	
	scanf("%d", &n);
	
	int i , j;
	
	for (i = 1, j = n-1; i <= n/2; i++, j-- ){
		if (isPrime(i) && isPrime(j))
			printf("%d = %d + %d\n", n, i, j);
	}	
}
