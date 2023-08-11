#include <stdio.h>

int isPrime (int n){

	if (n == 1 || n == 0 )
		return 0;
		
	for ( int i = 2; i <= n/2; i++ ){
		if ( n%i == 0)
			return 0;
	}	
	return 1;
}

int split( int n){

	int rev = 0, rem;
	while ( n > 0){

		rem = n % 10;
		if (!isPrime(rem))
			return 0;
		rev = rem + (rev * 10);
		n = n/10;
	}
	return 1;
}

void main(){

	int n, count = 0;
	int num=0;

	scanf("%d", &n);

	int i = 0;
	while (1){

		if ( i<= 9 && isPrime(i) ){
			num = i;
			count++;
		}
		else if ( i <= 10 && split(i) ) {

			num = i;
			count++;
		}
		
		if(n == count){
			printf("%d %d", n, num);
			break;
		}
		i++;
	}

	
}
