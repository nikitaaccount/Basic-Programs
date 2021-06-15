#include<stdio.h>

int main()
{
	int a=2,b,i,min,n;
	printf("\n How many coprime numbers do you want ");
	scanf("%d",&n);
	while(n)
	{
		for(b=2;b<=a;b++)
		{
		   min=a<b?a:b;
	       for(i=2;i<=min;i++)
	       {
		        if(a%i==0 && b%i==0)
		          break;
	       }
		   if(i==min+1)
		   {
		   	   printf("\n (%d , %d ) ",a,b);
			   n--;	
			   if(n==0)
			     break;
		   }     
		}
		a++;	
	}
    return 0;
}
