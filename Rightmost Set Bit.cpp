#include<stdio.h>
#include<math.h>

int main()
{
	int n,x,y;
	printf("\n Enter the number ");
	scanf("%d",&n);
	x=n & (n-1);
	y=log(n^x)/log(2);
	printf("\n The first rightmost bit is %d ",y+1);
	return 0;
}

// eg 128 -(10000000) 8th bit
