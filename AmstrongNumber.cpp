// Number whose sum of cubes of digits is equal to that number is called armstrong number.
// 153 is amstrong number since 1^3 +5^3 + 3^3=153
#include<stdio.h>

int pow(int,int);
int main()
{
	int n,temp,rem,sum=0,digit=0;
	printf("\n Enter the number ");
	scanf("%d",&n);
	
	// Count the no of digits
	temp=n;
	while(temp!=0)
	{
		digit++;
		temp=temp/10;
	}
	
	//checking for ARMSTRONG
	temp=n;
	while(temp!=0)
	{
	 rem=temp%10;
	 sum=sum + pow(rem,digit);
	 temp=temp/10;	
	}

    if(n==sum)
	   printf("\n %d is Amstrong number ",n);
	else
	   printf("\n %d is not a Amstrong number ",n);
	return 0;
}

int pow(int n,int r)
{
	int i,p=1;
	for(i=1;i<=r;i++)
	{
		p=p*n;
	}
	return p;
}
