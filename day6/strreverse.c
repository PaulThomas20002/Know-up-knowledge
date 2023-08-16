#include <stdio.h>
#include <string.h>

void main(){
	char s1[10], s2[10];

	char temp ;
	
	scanf("%s", s1);
	printf("\n%s", s1);	
	for (int i=0; i < strlen(s1)/2; i++){
		
		temp = s1[i];
		s1[i] = s1[ (strlen(s1)-i-1)];
		s1[ (strlen(s1)-i-1)] = temp;
	}
	printf("\n%s", s1);
	printf("\n%d", strlen(s1));


}