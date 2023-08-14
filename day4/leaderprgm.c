#include <stdio.h>

void printLeader (int arr[], int n){
	int max, i,j;
	max = arr[n-1];
	printf("%d ", max );
	
	for ( i=n-2; i>=0; i-- ){
		if (max < arr[i]){
			printf(" %d ",arr[i]);
			max = arr[i];			
		}
	}
}

void main(){
	int n, arr[10], max, temp;

	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	printLeader( arr, n );	

}