#include <stdio.h>
void main(){
int i, j, k, a[20], b[20], n, max, count=0;
printf("Input n: ");
scanf("%d", &n);
printf("Packets\n"); for (i=0; i<n; i++){
scanf("%d", &a[i]);
}
printf("\n");
printf("Frame size: ");
scanf("%d", &k);

printf("\n");
for(j=0; j<n-k+1; j++){
  for (i=j; i<j+k-1; i++){
    if(a[i]<a[i+1]) {
        max = a[i+1];
    }else{
        max = a[i];
    }
  } 
  printf("%d\t", max);
}
}
