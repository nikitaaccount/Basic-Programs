/*       
          *
         * *
        * * *
       * * * *
      * * * * *
     * * * * * *
    * * * * * * *
   * * * * * * * *
  * * * * * * * * *
 * * * * * * * * * *      
 
*/

#include<stdio.h>

int main()
{
	int n,i,row,space;
	printf("\n Enter the no of rows ");
	scanf("%d",&n);
	printf("\n ");
	        
	for(row=1;row<=n;row++)
	{
	   for(space=1;space<=n-row;space++)
	        printf(" ");
	        
	   for(i=1;i<=row;i++)
	        printf("* ");   
			 
	   printf("\n ");
	} 
	return 0;
}
