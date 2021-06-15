/*
  Eg- 34
  3+31=34  i+ (x-i)=x
  5+29=34
  11+23=34
  17+17=34
*/

#include<stdio.h>

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

int nextPrime(int n)
{
	do
	{
	 n++;	
	}while(!isPrime(n));
	return n;
}

int main()
{
	int x,i;
	printf("\n Enter the number ");
	scanf("%d",&x);
	
	for(i=2;i<=(x-i);i=nextPrime(i))
	{
		if(isPrime(x-i))
		     printf("\n %d + %d = %d\n",i,x-i,x);
		 
	}
	return 0;
}

