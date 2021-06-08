#include<stdio.h>

// This algorithm is used to find the set bits. 
// This will run only for no of set bits in a binary number.

int main()
{
	int n,count;
	printf("\n Enter the number ");
	scanf("%d",&n);
	count=0;
	while(n>0)
	{
		n=n&(n-1);  
		count++;
	}
	printf("\n %d Set Bits are there ",count);
	return 0;
}
