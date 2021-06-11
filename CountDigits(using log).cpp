#include<stdio.h>
#include<math.h>

int main()
{
	int n,x;
	printf("\n Enter the number ");
	scanf("%d",&n);
	x=log(n)/log(10);
	printf("\n The number of digits are %d ",x+1);
	return 0;
}
