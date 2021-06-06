/*       
          *
         ***
        *****
       *******
      *********
     ***********
    *************
   ***************
  *****************
 *******************
 
*/

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
	        printf(" ");
	        
	   for(star=1;star<=x;star++)
	        printf("*");
	   x=x+2;
	   printf("\n ");
	}
	return 0;
}
