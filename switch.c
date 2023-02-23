#include<stdio.h>

main() {
	
	int a,b;
	printf("Enter Number A : ");
	scanf("%d",&a);
	printf("Enter Number B : ");
	scanf("%d",&b);
	
	switch(a>b) {

		case 1:
			printf("A is Big");
			break;
	
		case 0:
			printf("B is Big");
			break;
	
	}
	
}
