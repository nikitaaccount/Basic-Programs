#include<stdio.h>

int isPrime(int);

int main()
{
	int n1,n2,i;
	printf("\n Enter the range ");
	scanf("%d%d",&n1,&n2);
	
	printf("\n The numbers which are prime are ");
	for(i=n1;i<=n2;i++)
	{
		if(isPrime(i))
		  printf(" %d ",i);
	}
    return 0;
}

int isPrime(int n)
{
	if(n==1)
	   return 0;
	if(n==2  || n==3)
	   return 1;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		 return 0;
	}
	return 1;
}

