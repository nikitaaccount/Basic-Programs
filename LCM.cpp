//LCM(a,b) =(a X b)/ HCF(a,b)

#include<stdio.h>

int main()
{
	int a,b,min,HCF,LCM;
	printf("\n Enter two numbers ");
	scanf("%d%d",&a,&b);
	
	min=a<b?a:b;
	for(HCF=min;HCF>=0;HCF--)
	{
		if(a%HCF==0 && b%HCF==0)
		  break;
	}
	LCM=(a*b)/HCF;
	printf("\n LCM Of %d and %d is %d ",a,b,LCM);
	return 0;
}

