#include <stdio.h>
#define N 8
void main(){
	int i, j;
	int k, si, ei, m , temp;
	int a[10];
	k=3;
	//scanf("%d", &k);
	int n=6;
	for ( i=0; i<N; i++)
		scanf("%d", &a[i]);
	si = 0;
 	m = (k-1)/2;
	ei = k-1;
	for (i=0; i<N;i++){
		temp = a[si];
		a[si] = a[ei];
		a[ei] = temp;

		si+=k;
		ei+=k;
		if (ei <= N)
			ei = N-1;
		m+=k;
	}

	for ( i=0; i<N; i++)
		printf("%d\t", a[i]);
}