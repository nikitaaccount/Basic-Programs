#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,D;
	float x,y;
	printf("\n Enter the coefficient of x^2 , x and constant term ");
	scanf("%d %d %d",&a,&b,&c);
	D=b*b-4*a*c;
	
	if(D<0)
	{
	    printf("\n Roots are imaginary ");	
	} 
	if(D==0)
	{
		printf("\n Both Roots are equal ");
		x=-b/(2*a);
		printf("\n Root is %f ",x);
	}
	if(D>0)
	{
		printf("\n Roots are real and distinct ");
		x=(-b+sqrt(D))/(2*a);
		y=(-b-sqrt(D))/(2*a);
		printf("\n Root are %f %f ",x,y);
	}
	return 0;
	
}
