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

	int n,f=0, count = -1 ;
	printf("Enter the input : ");
	scanf("%d", &n);
	
	for ( int i = 1, j = n-1; i <= n/2; i++, j--){
		if (isPrime(i) && isPrime(j)){

			printf("%d = %d + %d\n", n, i, j);
			count++;
			f=1;
		}
	}
	if (f == 1){
		printf("No of ways : %d\n", count+1);
	}
	else{
		printf("No of ways : %d\n", count);
	}
}
