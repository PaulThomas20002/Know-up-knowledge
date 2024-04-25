//sum of odd and even in diagonal elements

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

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
	printf("\nRow major Matrix \n" );	
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			printf("%d\t", a[i][j]);
		}
	}
	
	printf("\nColumn major Matrix \n" );	
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			printf("%d\t", a[j][i]);
		}
	}

	printf("\nRight Spiral Matrix \n" );	
	for(i=0; i<m; i++){
		if(i%2==0)
			for(j=0;j<n;j++){
			printf("%d\t", a[i][j]);
			}
		
		else{
			for(j=n-1;j>=0;j--){
			printf("%d\t", a[i][j]);
			}
		}
	}

	printf("\nLeft Spiral Matrix \n" );	
	for(i=0; i<m; i++){
		if(i%2==0)
			for(j=n-1;j>=0;j--){
			printf("%d\t", a[i][j]);
			}		
		else{
			for(j=0;j<n;j++){
			printf("%d\t", a[i][j]);
			}	
		}
	}
	printf("\nTop Spiral Matrix \n" );	
	for(i=0; i<m; i++){
		if(i%2==0)
			for(j=n-1;j>=0;j--){
			printf("%d\t", a[j][i]);
			}		
		else{
			for(j=0;j<n;j++){
			printf("%d\t", a[j][i]);
			}	
		}
	}

	printf("\nRotate Matrix \n" );	
	for(i=m-1; i>=0; i--){
		for(j=0;j<n;j++){
			printf("%d\t", a[j][i]);	
		}
		printf("\n");
	}
	
	printf("\n90  Rotate Matrix \n" );	
	for(i=0; i<m; i++){
		for(j=n-1;j>=0;j--){
			printf("%d\t", a[j][i]);	
		}
		printf("\n");
	}
sleep(3);
clrscr();
	printf("\nMirror Matrix \n" );	
	for(i=0; i<m; i++){
		for(j=n-1;j>=0;j--){
			printf("%d\t", a[i][j]);	
		}
		printf("\n");
	}	

	
}