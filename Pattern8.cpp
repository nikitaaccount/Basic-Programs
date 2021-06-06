/*       
 ********* *********
 ********   ********
 *******     *******
 ******       ******
 *****         *****
 ****           ****
 ***             ***
 **               **
 *                 *

 *                 *
 **               **
 ***             ***
 ****           ****
 *****         *****
 ******       ******
 *******     *******
 ********   ********
 ********* *********
 
*/
//  * is replaced by space and vice versa.
#include<stdio.h>

int main()
{
	int n,x,row,space,star;
	printf("\n Enter the no of rows ");
	scanf("%d",&n);
	printf("\n ");
	x=1;
	for(row=1;row<=n;row++)
	{
	   for(space=1;space<=n-row;space++)
	        printf("*");
	        
	   for(star=1;star<=x;star++)
	        printf(" ");
	        
	   for(space=1;space<=n-row;space++) //added 
	        printf("*");
	   x=x+2;
	   printf("\n ");
	}
	
	x=2*n-3;
	for(row=1;row<=n-1;row++)
	{
	   for(space=1;space<=row;space++)
	        printf("*");
	        
	   for(star=1;star<=x;star++)
	        printf(" ");
	        
	  for(space=1;space<=row;space++)  //added not in pattern 7 
	        printf("*");
	          
	   x=x-2;
	   printf("\n ");
	}
	
	return 0;
}
