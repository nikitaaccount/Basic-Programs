#include<stdio.h>

int main()
{
	int low,high,n,i,fact;
	
	printf("\n Enter the lowest number ");
	scanf("%d",&low);
	printf("\n Enter the highest number ");
	scanf("%d",&high);
	
	for(n=low;n<=high;n++)
	{
		fact=1;
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf(" %d",fact);
		printf("\n");
	}
	return 0;
}
