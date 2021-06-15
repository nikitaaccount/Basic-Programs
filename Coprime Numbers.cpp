#include<stdio.h>

int main()
{
	int a,b,min,i;
	printf("\n Enter two numbers ");
	scanf("%d%d",&a,&b);
	min=a<b?a:b;
	for(i=2;i<=min;i++)
	{
		if(a%i==0 && b%i==0)
		  break;
	}
	if(i==min+1)
	   printf("\n %d and %d are coprime numbers ",a,b);
	else
	   printf("\n %d and %d are not coprime numbers ",a,b);
	return 0;
}
