#include<stdio.h>
main() {
	int i = 2000;
	
	do{
		
		if(i%4!=0) {
			
		} else if(i%100!=0){
			printf("%d  ",i);
		} else if(i%400!=0) {
			
		} else {
			printf("%d  ",i);
		}
		i++;
	} while(i<=3000);
}
