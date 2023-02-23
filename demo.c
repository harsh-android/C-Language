#include<stdio.h>
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
   
   test user

*/
main()
{
  
  int i,j,k;
  for(i=5;i>=1;i--)  //1<=5
  {
  	
	  for(j=1;j<=i;j++)
	  {
	    printf("%d",j);
	  }
	  printf("\n");
  }
  for(i=2;i<=5;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  		printf("%d",j);
	  }
	  printf("\n");
  }
  
}
