#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

	char line[1024] = "this.is.a.C.Programming.Class";
	char line1[1024] = "this.is.a.C.Programming.Class";
	char *token, *tok;
	printf("\n Line : %s\n", line);
	token = strtok(line, ".");
	while (token != NULL){
		printf("	%s", strrev(token));
		token = strtok(NULL, ".");
		if(token!=NULL){
			printf(".");
		}
		
	}
}