#include<stdio.h>

// this will run for no of bits which are present in binary for a particular decimal number.
int main()
{
	int n,count;
	printf("\n Enter the number ");
	scanf("%d",&n);
	count=0;
	while(n>0)
	{
		if((n&1)==1)  
		    count++;
		n=n>>1; //or n=n/2 (right shift)
	}
	printf("\n %d Set Bits are there ",count);
	return 0;
}
