#include <stdio.h>
#define MAX 5

int front = 0, rear = 0;
int  q[MAX] = {0};

void display(){
	for (int i=front; i<rear; i++)
		printf("%d\t", q[i]);
}

void enqueue(int e){
	
	if ( rear == MAX ){
		printf("\n Full\n");
		return;
	}
	else {
		//printf("\n%d : rear ", rear);
		q[rear] = e;
		rear++;
	}
	printf("\n");
	display();
}

void dequeue(){
	if ( front == MAX || front 11>= rear ){
		printf("\nEmpty\n");
		return;
	}
	else {
		printf("\n%d : Dequeued\n", q[front]);
		front++;
	}
	
	if ( front == MAX)
		front = rear = 0;
	display();
}

void main(){
	display();
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);

	display();

	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();

	enqueue(1);
	
}