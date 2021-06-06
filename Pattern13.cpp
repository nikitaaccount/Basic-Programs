/*
 1
 2 3
 4 5 6
 7 8 9 10
*/
#include<stdio.h>

int main()
{
	int n,row,col,x=1;
	printf("\n Enter the no of rows ");
	scanf("%d",&n);
	printf("\n ");
	for(row=1;row<=n;row++)
	{
	   for(col=1;col<=row;col++)
	   {
	   	  printf("%d ",x);
	   	  x=x+1;
	   }
	   printf("\n ");
	}
	return 0;
}
