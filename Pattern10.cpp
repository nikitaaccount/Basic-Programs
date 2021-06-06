/*       
 **********
 *        *
 *        *
 *        *
 *        *
 *        *
 *        *
 *        *
 *        *
 **********
 
*/

#include<stdio.h>

int main()
{
	int n,row,col;
	printf("\n Enter the no of rows ");
	scanf("%d",&n);
	printf("\n ");
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
		   if(row==1 || row==n || col==1 || col==n)
	            printf("*");
	       
	       else
	            printf(" ");	 
		}
		printf("\n ");     
    }
	return 0;
}
