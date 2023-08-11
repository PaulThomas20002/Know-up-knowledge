#include <stdio.h>
#include <math.h> 

int isPrime(int n){

	int i;
	
	for (i = 2; i <= n/2; i++){
		if ( n%i == 0){
			return 0;
		}
	}
	return 1;
}

void main(){

	int n;
	printf("Enter the input : ");
	scanf("%d", &n);
	
	int flag = isPrime(n);

	if (flag == 1 && n > 1 && ceil(n) == n){
		printf("\nPrime\n");
	}
	else {
		printf("\nNot Prime\n");
	}
}
