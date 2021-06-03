#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("\n Enter four numbers ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if((a>b)&&(a>c)&&(a>d))
	{
		printf("\n %d is largest",a);
	}
	else
	{
		if((b>c)&& (b>d))
		{
			printf("\n %d is largest",b);
		}
		else
		{
			if(c>d)
			    printf("\n %d is largest",c);
			else
			    printf("\n %d is largest",d);
		}
	}
	return 0;
}
