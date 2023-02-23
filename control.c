#include<stdio.h>

main() {
	
//	if
//	if else 
//	else if
//	nested if else
//	switch case
//	ternary operator

	int marks,a,b;
	
	printf("Enter Marks : ");
	scanf("%d",&marks);
	
	if(marks>=91) {
		printf("A Grade");
	} else if(marks<=90 && marks>=71) {
		printf("B Grade");
	} else if(marks<=70 && marks>=51) {
		printf("C Grade");
	} else if(marks<=50 && marks>=35) {
		printf("D Grade");
	} else {
		printf("Fail");	
	}
	
}





