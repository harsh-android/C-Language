#include<stdio.h>

main() {
	
	int a,b,c;
	
	printf("Enter A B C : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b) {
		if(a>c) {
			printf("A is Big");
		} else {
			printf("C is Big");
		}
	} else {
		if(b>c) {
			printf("B is Big");
		} else {
			printf("C is Big 2");
		}
	}
	
}
