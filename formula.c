#include<stdio.h>

main() {

	int bs,hra,da,ta,gs;
	
	printf("Enter Base Salary : ");
	scanf("%d",&bs);
	
	hra = bs*10/100;
	da = bs*5/100;
	ta = bs*8/100;
	
	gs = bs+hra+da+ta;
	
	printf("Gross Salary: %d",gs);
	
		

}
