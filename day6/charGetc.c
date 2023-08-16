#include <stdio.h>
#include <stdlib.h>

void main(){
	char name[20];
	int i;

	for ( int i=0; ; i++){
		scanf("%c", &name[i]) ;
		if (name[i] == 'Z'){
			break;
		}
		
	}
	i++;
	//name[i] = '\0';
	printf("\no/p\n");
	printf("%s", name);

}