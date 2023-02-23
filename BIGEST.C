#include<stdio.h>

main() {
	
	int a,b,c,d,e;
	printf("Enter Value A,B,C,D,E : ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	if(a>b) {
		if(a>c) {
			if(a>d) {
				if(a>e) {
					printf("A is Big");
				} else {
					printf("E is Big");
				}
			} else {
				if(d>e) {
					printf("D is Big");
				} else {
					printf("E is Big");
				}
			}
		} else {
			if(c>d) {
				if(c>e) {
					printf("C is Big");
				} else {
					printf("E is Big");
				}
			} else {
				if(d>e) {
					printf("D is Big");
				} else {
					printf("E is Big");
				}
			}
		}
	} else {
		if(b>c) {
			if(b>d) {
				if(b>e) {
					printf("B is Big");
				} else {
					printf("E is Big");
				}
			} else {
				if(d>e) {
					printf("D is Big");
				} else {
					printf("E is Big");
				}
			}
		} else {
			if(c>d) {
				if(c>e) {
					printf("C is Big");
				} else {
					printf("E is Big");
				}
			} else {
				if(d>e) {
					printf("D is Big");
				} else {
					printf("E is Big");
				}
			}
		}
	}
	
	
}







