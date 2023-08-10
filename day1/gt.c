#include <stdio.h>

void main(){

	int x, y, z;

	printf("Enter the three numbers ");
	scanf("%d %d %d", &x, &y, &z);

	int d = (x > y)? x>z?x:z : y>z? y:z;

	printf("\n%d is the greater than other numbers\n", d);
}
