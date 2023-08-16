#include <stdio.h>
//#define CAP 5
int a[10];

void getElem(int [], int);

void dispArr(int [], int);

int revArr(int [], int);

int revArrPos(int [], int , int );

void main(){
	
	int CAP=10;

	//int a[CAP];

	getElem(a, CAP);

	dispArr(a, CAP);

	//	revArr(a, CAP);
	int k =3;
	for (int i = 0; i < CAP/k; i++){
	revArrPos(a, 0, k);

	revArrPos(a, k, CAP);
	}	
	dispArr(a, CAP);

}


void getElem(int a[10], int CAP){
	for (int i=0; i<CAP; i++)
		scanf("%d", &a[i]);
}

void dispArr(int a[10], int CAP){
	printf("\n");
	for (int i=0; i<CAP; i++){
		printf("%d  ", a[i]);
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

int revArrPos(int arr[10], int is, int ie){
	int N = 10;
	//int mid = (is+ie)/2;
	int temp, end;

	end = ie-1;
	int mid = ie/2;
	if (is>=mid){
		mid = ie -1;
		end = ie -1;
	}

	for (int  i=is; i<mid && i < end;i++){
		temp = arr[i];
		arr[i] = arr[end];
		arr[end] = temp;
		end--;
	}
}
