#include<stdio.h>

void prime(int);

int main()
{
	int n1,n2,i;
	printf("\n Enter the range ");
	scanf("%d%d",&n1,&n2);
	
	printf("\n The numbers which are prime are ");
	for(i=n1;i<=n2;i++)
	    prime(i);
	
    return 0;
}

void prime(int n)
{
	int flag,i;
	for(i=2;i*i<=n;i++)
	{
		flag=0;
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	    printf(" %d ",n);
}

