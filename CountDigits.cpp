#include<stdio.h>

int main()
{
	int n,count=0;
	printf("\n Enter the number ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("\n No of digits are %d",count);
	return 0;
}
