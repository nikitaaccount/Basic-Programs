#include<stdio.h>

int main()
{
	int a,b,i,prod=1;
	printf("\n Enter the base ");
	scanf("%d",&a);
	printf("\n Enter the power ");
	scanf("%d",&b);
	
	for(i=1;i<=b;i++)
	{
		prod=prod*a;
	}
	printf("\n Answer is %d",prod);
	return 0;
}
