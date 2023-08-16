#include <stdio.h>
#include <string.h>
void main(){
	char s1[10], s2[10];
	scanf("%s", s1);
	scanf("%s", s2);
	char temp;

	if( strlen(s1) == strlen(s2)){
		for ( int i=0; i< strlen(s1)-1;i++){
			for (int j=0; j<strlen(s1)-i-1;j++){
				if ( s1[j] < s1[j+1] ){
					temp = s1[j];
					s1[j] = s1[j+1];
					s1[j+1] = temp;
				}
			}
		}
		for ( int i=0; i< strlen(s2)-1;i++){
			for (int j=0; j<strlen(s2)-i-1;j++){
				if ( s2[j] < s2[j+1] ){
					temp = s2[j];
					s2[j] = s2[j+1];
					s2[j+1] = temp;
				}
			}
		}
		printf("\n%s\n", s1);
		printf("%s", s2);
		
		if (strcmp(s1,s2) == 0)
			printf("\nAnagram");
		
	}
	else{
		printf("Not ");
	}


}