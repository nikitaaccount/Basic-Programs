/*
 1
 10
 101
 1010
 10101
 101010
*/

#include<stdio.h>

int main()
{
	int n,k,row,col;
	printf("\n Enter the no of rows ");
	scanf("%d",&n);
	printf("\n ");
	for(row=1;row<=n;row++)
	{
	   k=1;
	   for(col=1;col<=n;col++)
	   {
	   	  if(col<=row)
	   	  {
	   	    printf("%d",k);
	   	  	k=1-k;
		  }  
		  else
		    printf(" ");
	   }
	   printf("\n ");
	}
	return 0;
}
