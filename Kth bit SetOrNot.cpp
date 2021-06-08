#include<stdio.h>

int main()
{
	int n,k;
	printf("\n Enter the number ");
	scanf("%d",&n);
	
	printf("\n Enter the bit number for which you want to check ");
	scanf("%d",&k);
		
    if((n & 1<<(k-1))!=0)  
		printf("\n YES ");
	else
	    printf("\n NO ");
	return 0;
}
