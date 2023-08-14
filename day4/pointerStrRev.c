#include <stdio.h>
#include <string.h>
void main(){
	char *p1, *p2;
	
	char temp;
	char str[10];
	scanf("%s", str);

	p1 = str;
	int len = strlen(str);
	p2 = str + len -1;
		
	for (int i=0; i<len/2; i++){
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++; p2--;
	}
	printf("\n\n%s", str);
}