//Perfect Number - Sum of all the factors of that number (except that number) 1+2+3=6

#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n Enter the number ");
	scanf("\%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	    printf(" %d is a Perfect Number ",n);
	
	else
	    printf(" %d is not a Perfect Number ",n);
	return 0;
}
