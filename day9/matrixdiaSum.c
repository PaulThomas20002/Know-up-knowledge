//sum of odd and even in diagonal elements

#include <stdio.h>

void main(){

	int i, j , k, m, n, count=0, even=0, odd=0;
	int a[20][20], b[20];

	printf("Matrix size : " );
	scanf("%d%d", &m, &n);

	printf("\nMatrix \n" );	
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nMatrix \n" );	
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
//process
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			if(i==j){
				if(a[i][j] %2 == 0){
					even+=a[i][j];
				}
				else{
					odd+=a[i][j];
				}
			}
		}
	}
//print of array
	printf("\n");
	for(i=0, j=m-1;i<m,j>=0; i++,j--){
		if(i!=j)
			if(a[i][j] %2 == 0){
				even+=a[i][j];
		                  }
			else{
				odd+=a[i][j];
			}		
	}

	printf("Even : %d\nOdd : %d\t",even, odd);
	
}