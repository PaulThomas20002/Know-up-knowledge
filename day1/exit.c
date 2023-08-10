#include <stdio.h>

void main(){

	for (int i = 11; ; i++){
		printf("%d\n", i);

		if ( i >= 10){
			break;
		}
	}
}
