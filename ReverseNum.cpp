#include<stdio.h>

int reverse(int n);

int main()
{
	int n,i,rev;
	printf("\n Enter the number ");
	scanf("%d",&n);
	rev=reverse(n);
	printf("\n Reverse of %d is %d ",n,rev);
	return 0;
}
int reverse(int n)
{
	static int rem,sum;
	if(n)
	{
	   rem=n%10;
	   sum=sum*10+rem;
	   reverse(n/10);	
	}	
	return sum;
}



