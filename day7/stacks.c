#include <stdio.h>
#define MAX 5

int top = -1;
int stack[MAX];

void display(){
	for ( int i = top; i >=0; i--){
		printf("%d\t", stack[i] );
	}
	printf("\n\n");
}

void pop(){
	if ( top == -1 ){
		printf("\n Stack is empty");
		return;
	}
	else {
		printf("\n%d : popped out\n", stack[top]);
		top--;
	}
}

void push( int e ){
	if ( top ==  MAX-1 ){
		printf("\n Stack is Full");
		return ;
	}
	else {
		++top;
		stack[top] = e ;
		display();
	}
}

void main(){
	
	/*int choice;
	do {
	}while();		*/

	push (90);
	push (10);
	push (10);
	push (10);
	push (10);
	push (10);
	push (90);

	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	
	display();
}