#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int top= -1;
char a[20];

void pop(){
	printf("\n   Popped");	
	a[top] = ' ';
	top--;
}

void push(char x){
	top++;
	a[top]= x;
	printf("\n %c Pushed", a[top]);
}

void main(){

	int  i, j, k;
	char str[20];

	printf("\nString : ");
	scanf("%s", str);
	printf("%s", str);

	for(i=0; str[i] != '\0'; i++){
		if(str[i] == '('){
			push('(');
		}
		else if(str[i] == ')'){
			if(a[top] == '(')
				pop();
			else{
				printf("\nImbalanced");
				exit(0);
			}
		}
		else if(str[i] == '{'){
			push('{');
		}
		else if(str[i] == '}'){
			if(a[top] == '{')
				pop();
			else{
				printf("\nImbalanced");
				exit(0);
			}
		}
		else if(str[i] == '['){
			push('[');
		}
		else if(str[i] == ']'){
			if(a[top] == '}')
				pop();
			else{
				printf("\nImbalanced");
				exit(0);
			}
		}
	}
	printf("\n%s", a);

	if(top == -1){
		printf("\nBalanced");
	}
	else{
		printf("\nImbalanced");	
	}
}