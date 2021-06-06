//HCF <= MIN(a,b)

#include<stdio.h>

int main()
{
	int a,b,min,i;
	printf("\n Enter two numbers ");
	scanf("%d%d",&a,&b);
	
	min=a<b?a:b;
	for(i=min;i>=0;i--)
	{
		if(a%i==0 && b%i==0)
		  break;
	}
	printf("\n HCF Of %d and %d is %d ",a,b,i);
	return 0;
}

