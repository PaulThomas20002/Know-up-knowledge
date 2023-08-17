#include <stdio.h>
#include <stdlib.h>

typedef struct emp {
	int id, num;
	float sal;
	char name[25];
} EMP;
 
void getDetails( EMP *e ){
	printf("ID, Ph, Sal, Name in order\n");
	scanf("%d", &e->id);
	scanf("%d", &e->num);
	scanf("%f", &e->sal);
	scanf("%s", e->name);
}

void printDetails( EMP e ){
	printf("\nID:%d\nPHno:%d\nSalary:%.2f\nName:%s\n", e.id, e.num,e.sal, e.name);
}

void main(){
		
	int i;
	EMP *e;
	e = (EMP *) malloc (sizeof(EMP)*5);
	for (int i =0; i<5; i++)
		getDetails( &e[i] );
	for (int j=0; j<5; j++)
		printDetails ( e[j] );
}