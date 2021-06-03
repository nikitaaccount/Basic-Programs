// input n=1231 d=1, output= 2
#include<stdio.h>

int main()
{
	int n,digit,i,rem,count=0;
	printf("\n Enter the number ");
	scanf("%d",&n);
	printf("\n Enter the digit for which you want to find frequency ");
	scanf("%d",&digit);
    while(n!=0)
    {
    	rem=n%10;
    	if(rem==digit)
    	    count++;
    	n=n/10;
	}
	printf("\n The frequency of %d is %d ",digit,count);
	return 0;
}
