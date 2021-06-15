#include<stdio.h>
#define MAX 100
int main()
{
	int isPrime[MAX+1],i,j;
	
	// initially assuming all numbers are prime
	for(i=2;i<=MAX;i++)
		isPrime[i]=1;
		
	for(i=2;i*i<=MAX;i++)
	{
		if(isPrime[i]==1)
		{
			for(j=2*i;j<=MAX;j=j+i)
			  isPrime[j]=0;
		}
	}
	printf("\n The prime numbers upto %d are: ",MAX );
	int primes=0;
	for(i=2;i<=MAX;i++)
	{
		if(isPrime[i])
		{
		    primes++;
		    printf(" %d ",i);	
		}	 
	}
	printf("\n The number of primes are %d ",primes);
	return 0;
}
