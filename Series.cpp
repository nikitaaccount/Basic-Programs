// 1/1! +1/2! + 1/3! + .... n/n!

#include<stdio.h>
int fact(int n);

int main()
{
	int n,i,a,sum=0;
	printf("\n Enter the value of n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=fact(i);
		sum=sum + (1/a);
	}
	printf("\n The Sum of Series is  %d ",sum);
	return 0;	
}
int fact(int n)
{
	int fact=1,j;
	for(j=1;j<=n;j++)
	{
		fact=fact*j;
	}
	return fact;
}
