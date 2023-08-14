#include <stdio.h>
//#define CAP 100
int a[10];


void getElem(int [], int);

void dispArr(int [], int);

int revArr(int [], int);

int revArrPos(int [], int , int );

void main(){
	
	int CAP=10;
	int k , i ,n, count =0;
	int ie, is;

	scanf("%d", &n);

	int a[n];

	getElem(a, n);

	dispArr(a, n);

	//	revArr(a, CAP);

	//	revArrPos(a, 0, 5);

	//	revArrPos(a, 5, CAP);
	scanf("%d", &k);
	for ( i=0, is=0;i<n;i++ ){
		if(i%k == 0){
			ie = i;
			revArrPos(a, is, ie);
			is = ie;
		}
		else {

			if(i>=n-1){
				revArrPos(a, is, i+1);
			}
		}
	}

	dispArr(a, n);

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
	printf("\n");
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
