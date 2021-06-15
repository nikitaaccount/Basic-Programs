#include<stdio.h>

int main()
{
	int a[40]={1,2,3,4,5,6,7};
	int sum=9;
	int len=sizeof(a)/sizeof(a[0]);
	
	int low=0;
	int high=len-1;
	
	while(low<=high)
	{
		if(a[low]+a[high]>sum)
		    high--;
		    
		else if(a[low]+a[high]<sum)
		    low--;
		
		else if(a[low]+a[high]==sum)
		{
			printf("\n %d",a[low]);
			low++;
			high++;
		}
	}
	return 0;
}
