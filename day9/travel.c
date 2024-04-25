#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#define perkm 2

int distance[10]={0,10,20,5,7};

void main(){
	int start, stop, sum=0;
	printf("Start (1-5)");
	scanf("%d", &start);
	printf("Stop (1-5)");
	scanf("%d", &stop);

	int travel[10];

	for (int i=0; i<6; i++){
		sum+=distance[i];
		travel[i] =sum;
	}
	
	for (int i=0; i<6-1; i++){
		printf("%d  ", travel[i]);
	}

	float dist = travel[stop-1] - travel[start-1];
	
	if(stop < start){
		printf("\nGet down");
		exit(0);	
	}

	float cost = dist * perkm;

	int cost1 = ceil(cost);

	printf("\n%.2f", dist);
	printf("\n%d", cost1);
}