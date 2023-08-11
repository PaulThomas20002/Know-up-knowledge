#include <stdio.h>

int rev( int n){
	int rev = 0, rem;

	if ( n < 0 ){
		n = n * -1;
	}
	
	while (n > 0){
		rem = n % 10;
		rev = rem + (rev * 10);
		n = n/10;		
	}
	return rev;
}	
	
void main(){

	int n, rev1 = 0;

	scanf("%d", &n);

	int n_cpy = n;

	rev1 = rev(n);

	if ( n < 0 ){
		rev1 = rev1 * -1;
	}
	

	printf("\nReversal : %d", rev1);
}
