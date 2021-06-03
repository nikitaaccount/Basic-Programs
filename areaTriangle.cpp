#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,s,area;
	printf("\n Enter the three sides of the triangle ");
	scanf(" %f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt((s*(s-a)*(s-b)*(s-c)));
	printf("\n Area of triangle is %.3f ",area);
	return 0;
}
