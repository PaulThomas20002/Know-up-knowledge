
#include <stdio.h>

void main(){
	int i, j, n;
	printf("Enter the input : ");
	scanf("%d", &n);
	for(int i = 0; i <= n ; i++){
		
		for (j = 0; j <n-i; j++){
			printf(" ");
			}

		for (int j = 0; j <= i; j++){
			printf("%c",j+65);
			}

		for (int j = i-1; j >= 0; j--){
			printf("%c", j+65);
			}
		printf("\n");
		}
}
