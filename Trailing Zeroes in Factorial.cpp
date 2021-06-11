#include<stdio.h>

int main()
{
	int n,i,sum=0;
	printf("\n Enter the number ");
	scanf("%d",&n);
	for(i=5;i<=n;i*=5)
	{
		sum= sum + n/i;
    } 
    printf("\n The number of trailing zeroes in n! is %d ",sum);
	return 0;
}
