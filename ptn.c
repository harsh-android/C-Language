#include<stdio.h>

main() {
	
	int i,j,k;
	
	for(i=1 ; i<5 ; i++) {
		
		for(k=i ; k<5 ; k++) 
			printf("  ");
		
		for(j=1 ; j<=i ; j++) {
			printf("  %d ",j);
		}
		
		for(k=i ; k<5 ; k++) 
			printf("    ");
			
		for(j=1 ; j<=i ; j++) 
			printf("  %d ",j);
		
		printf("\n");
	}

	for(i=5 ; i>1 ; i--) {
		
		for(k=i ; k<5 ; k++) 
			printf("  ");
		
		for(j=1 ; j<=i ; j++) {
			printf("  %d ",j);
		}
		
		for(k=i ; k<5 ; k++) 
			printf("    ");
			
		for(j=1 ; j<=i ; j++) {
			if(i==5 & j%2==0)
				printf("  * ");
			else
				printf("  %d ",j);
		}
			
		printf("\n");
	}
	
	for(i=1 ; i<=3 ; i++) {
		
		for(k=i ; k<5 ; k++) 
			printf("  ");
		
		for(j=1 ; j<=i ; j++) {
			printf("  %d ",j);
		}
		
		for(k=i ; k<5 ; k++) 
			printf("    ");
			
		for(j=1 ; j<=i ; j++) 
			printf("  %d ",j);
		
		printf("\n");
	}

//	printf("\n");
	
	for(i=2 ; i>1 ; i--) {
		
		for(k=i ; k<5 ; k++) 
			printf("  ");
		
		for(j=1 ; j<=i ; j++) {
			printf("  %d ",j);
		}
		
		for(k=i ; k<5 ; k++) 
			printf("    ");
			
		for(j=1 ; j<=i ; j++) 
			printf("  %d ",j);
		
		printf("\n");
	}
	
	for(i=1 ; i<=5 ; i++) {
		
		for(k=i ; k<5 ; k++) 
			printf("  ");
		
		for(j=1 ; j<=i ; j++) {
			printf("  %d ",j);
		}
		
		for(k=i ; k<5 ; k++) 
			printf("    ");
			
		for(j=1 ; j<=i ; j++) {
			if(i==5 & j%2==0)
				printf("  * ");
			else
				printf("  %d ",j);
		}
			
		printf("\n");
	}

	for(i=4 ; i>=1 ; i--) {
		
		for(k=i ; k<5 ; k++) 
			printf("  ");
		
		for(j=1 ; j<=i ; j++) {
			printf("  %d ",j);
		}
		
		for(k=i ; k<5 ; k++) 
			printf("    ");
			
		for(j=1 ; j<=i ; j++) 
			printf("  %d ",j);
		
		printf("\n");
	}


}
