#include<stdio.h>
#include<math.h>

int main()
{
  int n,i=0,sum=0;
  printf("\n Enter the number ");
  scanf("%d",&n);
  
  while(n)
  {
  	sum=sum + pow(2,i)*(n%10);
  	n=n/10;
  	i++;
  }
  printf("\n Number in Decimal is %d ",sum);
}
