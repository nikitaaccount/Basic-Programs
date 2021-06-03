#include<stdio.h>

int main()
{
	int n,rem,temp,sum=0;
	printf("\n Enter the number ");
	scanf("%d",&n);
	temp=n;
	
	while(temp!=0)
	{
	 rem=temp%10;
	 sum=sum*10+rem;
	 temp=temp/10;	
	}
	
	if(n==sum)
	   printf("\n %d is Palindrome number ",n);
	else
	   printf("\n %d is not a Palindrome number ",n);
	return 0;
}




