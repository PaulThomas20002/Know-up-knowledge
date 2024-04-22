#include <stdio.h>

void main(){
	float cho=75;
	
	printf("cho :%.2f\n", cho);

	float sam, ang;

	sam = cho;

	ang = sam/4;

	sam = (sam/2)+ang;

	printf("sam , ang : %.2f, %.2f", sam, ang);
}