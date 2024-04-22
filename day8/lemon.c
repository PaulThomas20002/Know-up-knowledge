#include <stdio.h>

void main(){
	int lemon ;
	
	printf("Lemon : ");
	scanf("%d", &lemon);

	if(lemon<=0){
		printf("Not sufficient");
	}
	else if (lemon > 21){
		printf("Surplus : %d", lemon-21);
	}
	else if (lemon == 21){		
		printf("Sufficient"); 		
	}
	else {
		printf("Shortage : %d\n", 21-lemon);
	
		if(lemon>=14){
			printf("God 1 : Sufficient\nGod 2 : Sufficient");
			printf("\nGod 3 : Need %d more", 7-(lemon-14));
		}
		else if(lemon>=7){
			printf("God 1 : Sufficient");
			printf("\nGod 2 : Need %d more",(14-lemon));
			printf("\nGod 3 :  Need 7 more");
		}
		else{
			printf("\nGod 1 : Need %d more", (7- lemon));
			printf("\nGod 2 : Need 7 more");
			printf("\nGod 3 :  Need 7 more");	
		}	
	}
	
	

	
	
}