#include <stdio.h>

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

void printDetails( EMP e){
	printf("\nID:%d\nPHno:%d\nSalary:%.2f\nName:%s\n", e.id, e.num,e.sal, e.name);
}

void updateSal( EMP *e, float sal){
	e->sal = sal;	
}

void main(){
	
	EMP e;
	float sal;
	getDetails( &e );
	printDetails (e);
	
	printf("\nEnter the salary : ");
	scanf("%f", &sal);
	updateSal( &e, sal);

	printDetails (e);
}