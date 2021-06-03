#include<stdio.h>

int main()
{
	int n,i;
	printf("\n Enter the number ");
	scanf("%d",&n);
	
	printf("\n Table of %d is",n);
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf(" %d X %d = %d\n",n,i,n*i);
	} 
	return 0;
}
