#include<stdio.h>

main() {
	
	int y = 2000;
	int count=0;
	
	while(y<=3000) {
		if(y%4!=0) {
			
		} 
		else if (y%400==0) {
			printf("%d  ",y);
			count++;
		} else if (y%100==0) {
			
		} else {
			printf("%d  ",y);
			count++;
		}
		y++;
	}
	
	
	printf("\n Leap Year count : %d",count);
	
}
