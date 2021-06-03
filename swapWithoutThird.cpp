/*
a=10 b=20
a=30 b=20
a=30 b=10
a=20 b=10 */

#include<stdio.h>

int main()
{
	int a,b;
	printf("\n Enter two numbers ");
	scanf("%d%d",&a,&b);
	
	printf("\n Before Swapping ");
	printf("\n a= %d and b= %d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\n After Swapping ");
	printf("\n a= %d and b= %d",a,b);
	return 0;
	
}


