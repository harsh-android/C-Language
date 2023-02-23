#include<stdio.h>
main() {
	int n,r,s=0,temp;
	printf("Enter Value N : ");
	scanf("%d",&n); //123
	
	temp = n;
	while(n!=0) {
		r = n%10; // 1
		s = s*10+r; // 321
		n = n/10; // 0
	}

	printf("Rev = %d",s);

}
