/*       

 *
 **
 * *
 *  *
 *   *
 *    *
 *     *
 *      *
 *       *
 **********
 
*/

#include<stdio.h>

int main()
{
	int n,x,row,space,star;
	printf("\n Enter the no of rows ");
	scanf("%d",&n);
	printf("\n ");
	for(row=1;row<=n;row++)
	{
	   if(row==1 || row==n)
	   { 
	       for(star=1;star<=row;star++)
	            printf("*");
	       printf("\n ");	
	   }
	   else
	   {
	    	printf("*");
	   	    for(space=1;space<=row-2;space++)
	            printf(" ");
	        printf("*");
	        printf("\n ");	       
	   }       
   }
	return 0;
}
