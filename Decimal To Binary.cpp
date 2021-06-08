#include<stdio.h>

void convert(int n);

int main()
{
 int n;
 printf("\n Enter the number ");
 scanf("%d",&n);
 convert(n);
 return 0;	
}

void convert(int n)
{
	int a[10],i,r;
	for(i=0;n!=0;i++)
	{
		r=n%2;
		a[i]=r;
		n=n/2;
	}
	printf("\n Binary is ");
	for(i=i-1;i>=0;i--)
	{
	   printf("%d",a[i]);	
	}
}
