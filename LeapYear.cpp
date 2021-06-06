#include<stdio.h>

int main()
{
	int year;
	printf("\n Enter the year ");
	scanf("%d",&year);
	if(year%100==0)// to check whether the year is century year or not
	{
		if(year%400==0)
           printf("\n Leap year");
		else	
		   printf("\n Not a Leap year");
	}
	else
	{
		if(year%4==0)
           printf("\n Leap year");
		else	
		   printf("\n Not a Leap year"); 
	}
	return 0;
}
