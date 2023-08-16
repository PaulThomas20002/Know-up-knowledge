#include <stdio.h>
#include <string.h>

void main(){
	char s1[10], s2[10];

	int ret=0;
	
	scanf("%s", s1);
	//scanf("%s", s2);
	

	//ret = strcmp(s1,s2);

	printf("%s\t%s\n%d", s1,strrev(s1),ret);

}