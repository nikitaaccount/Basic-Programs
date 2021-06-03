#include<stdio.h>
#define PIE 3.14

int main()
{
	float r,area;
	printf("\n Enter the radius of the cicle ");
	scanf("%f",&r);
	area=PIE*r*r;
	printf("\n Area is %.2f ",area);
	return 0;
}
