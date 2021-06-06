//  If Sum of the factorial of the digits is equal to that number  then we call Strong number
//  Eg 145  1! + 4! +5! =145
#include<stdio.h>

int main()
{
	int a,b,i,n,rem,temp,temp1,fact,sum;
	printf("\n Enter the range ");
	scanf("%d%d",&a,&b);
	for(n=a;n<=b;n++)
	{
		temp=temp1=n;
		sum=0;
	    while(temp>0)
	    {
		  rem=temp%10;
	      temp=temp/10;
	    
	      fact=1;
	      for(i=1;i<=rem;i++)
	      {
		    fact=fact*i;
	      }
	      sum=sum+fact;
     	}
	    if(sum==temp1)
	        printf(" %d is Strong Number\n ",temp1);
	}
	return 0;	
}
