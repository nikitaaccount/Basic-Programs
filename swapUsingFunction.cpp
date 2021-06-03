#include<stdio.h>
#include<string.h>

void swap(int *,int *);

int main()
{
	int a,b;
	printf("\n Enter two numbers ");
	scanf("%d%d",&a,&b);
	
	printf("\n Before Swapping ");
	printf("\n a= %d and b= %d",a,b);
	
	swap(&a,&b);
	
	printf("\n\n After Swapping ");
	printf("\n a= %d and b= %d",a,b);
	
	return 0;	
}

void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
