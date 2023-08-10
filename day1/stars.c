#include <stdio.h>

void main(){

int n;
scanf("%d",&n);

if ( 2 <= n && n <= 10){
	for (int i = 0; i <= 2*n; i++){
		if(i <= 2*n/2){
			for (int j = 0; j < i; j++){				
					printf("*"); 
				}
			}
		else {
			for (int j = 0; j < 2*n-i; j++){
						printf("*"); 
						}
			}
		printf("\n");
		
		}
}		
}

/////////////////////////////////////////////////////
/*
*
**
***
****
***
**
*
*/
