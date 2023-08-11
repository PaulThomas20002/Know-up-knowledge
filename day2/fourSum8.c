#include <stdio.h>

void main(){

	int i, j, k, l, flag = 0, count = -1, n;

	printf("Enter the number : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++ ){
		for (j = i; j <= n; j++ ){
			for (k = j; k <= n; k++){
				for ( l = k; l <= n; l++)
					if ( i+j+k+l == n ){
						printf("%d + %d + %d + %d = %d\n", i, j, k, l, n);
						count++;
						flag = 1;
					}
			}
		}
	}
	if ( flag == 1 ){
		printf("No of ways : %d\n", ++count);
		
	}
	else {
		printf("Noof ways : %d\n", count);
	}
}
