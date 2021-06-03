#include<stdio.h>

int main()
{
	int n;
	printf("\n Enter the number ");	
	scanf("\%d",&n);
	while(n>=10) // for 1024 it should be greater than equal to
	{
		n=n/10;
	}
	printf("\n First Digit is %d",n);
	return 0;
}

