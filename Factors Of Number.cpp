#include<stdio.h>

int main()
{
	int n,i;
	printf("\n Enter the number ");
	scanf("%d",&n);
	for(i=1;i*i<=n;i++)
	{
		if(n%i==0)
	    	printf(" %d %d",i,n/i);
	}
	return 0;
}
/* FOR SORTED ORDER

	for(i=1;i*i<n;i++)
	{
		if(n%i==0)
	    	printf(" %d",i);
	}
	for(;i>=1;i--)
	{
		if(n%i==0)
	    	printf(" %d",n/i);
	}
*/

