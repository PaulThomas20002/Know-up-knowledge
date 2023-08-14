#include <stdio.h>
//#define CAP 5
int a[10];

void getElem(int [], int);

void dispArr(int [], int);

int revArr(int [], int);

//int revArr(int [], int si, int ei);

void main(){
	
	int CAP=5;

	int a[CAP];

	getElem(a, CAP);

	dispArr(a, CAP);

	revArr(a, CAP);

	dispArr(a, CAP);

}


void getElem(int a[10], int CAP){
	for (int i=0; i<CAP; i++)
		scanf("%d", &a[i]);
}

void dispArr(int a[10], int CAP){
	printf("\n");
	for (int i=0; i<CAP; i++){
		printf("%d\t", a[i]);
	}
}
int revArr ( int arr[10], int N){
	int mid = N/2;
	int temp;
	for (int  i=0; i<mid;i++){
		temp = arr[ (N - i) -1];
		arr[(N-i)-1] = arr[i];
		arr[i] = temp;
	}

}
