#include <stdio.h>

typedef struct node {
	int value;
	struct node *link;
}Node;


void main(){
	Node n1, n2, n3, *temp;

	printf("%u - Address of n1\n", &n1);
	printf("%u - Address of n2\n", &n2);
	printf("%d - Address of n3\n", &n3);
	
	n1.value = 10;
	n1.link = NULL;

	n2.value = 20;
	n2.link = NULL;

	n3.value = 30;
	n3.link = NULL;

	n1.link = &n2;
	n2.link = &n3;

	temp = &n1;
	while (temp){			
		printf("\nNode : ");
		printf("[ %d | %u ]\n", temp->value, temp->link);

		temp=temp->link;

	}	

}