#include<stdio.h>

main() {
	
	int a,b,c;
	
	printf("Enter Value A B C : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
		if(a>c)
			printf("A is Big");
		else 
			printf("C is Big");
	else {
		printf("Test");
		if(b>c)
			printf("B is Big");
		else 
			printf("C is Big");
	
	}
	(a>b) 	? (a>c)	? printf("A is Big")
					: printf("C is Big")
			: (b>c)	? printf("B is Big")
					: printf("C is Big");
	
}
