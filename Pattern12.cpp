/*
 1
 12
 123
 1234
 12345
 123456
 1234567
 12345678
 123456789
 
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
	   for(col=1;col<=row;col++)
	   {
	   	  printf("%d",col);
	   }
	   printf("\n ");
	}
	return 0;
}
