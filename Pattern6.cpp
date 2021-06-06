/*     
 *******************
  *****************
   ***************
    *************
     ***********
      *********
       *******
        *****
         ***
          *     
*/
#include<stdio.h>

int main()
{
	int n,x,row,space,star;
	printf("\n Enter the no of rows ");
	scanf("%d",&n);
	printf("\n ");
	x=2*n-1;     
	for(row=1;row<=n;row++)
	{
	   for(space=1;space<=row-1;space++)
	        printf(" ");
	        
	   for(star=1;star<=x;star++)
	        printf("*");   
	   x=x-2;	 
	   printf("\n ");
	} 
	return 0;
}
