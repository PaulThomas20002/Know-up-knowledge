#include <stdio.h>
#include <string.h>

char s1[10];
int len = 0;
void revStr(int start, int end){
	
	int i, j;
	char temp;	

	for (i=start, j=end-1; i< (start+end)/2; i++, j--){
		temp = s1[i];
		s1[i] = s1[j];
		s1[j] = temp;
	}
	printf("\n%s", s1);
	
}


void main(){
	int j, i;
	scanf("%s", s1);
	len = strlen(s1);
	for ( i=0, j=0; j<len;i++){
		if ((char) s1[i] == '.'){
			revStr(j, i);
			j=i+1;
		}
	}
	printf("\n\n%s", s1);
}