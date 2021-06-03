#include<stdio.h>

int main()
{
	int n,i,flag=0;
	printf("\n Enter the number ");
	scanf("%d",&n);
	for(i=2;i*i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			printf("\n The number %d is not prime ",n);
			break;
		}
	}
	if(flag==0)
	{
		printf("\n The number %d is prime ",n);
	}
	return 0;
}
