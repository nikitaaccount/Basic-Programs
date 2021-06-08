#include<stdio.h>
#include<limits.h>

int main()
{
	int a[30],n,i,l1,l2;
	printf("\n Enter the size of the array ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	l1=INT_MIN;
	l2=INT_MIN;
	
	for(i=0;i<n;i++)
	{
		if(a[i]>l1)
		{
			l2=l1;
			l1=a[i];
		}
		else if(a[i]>l2 && a[i]<l1)
		{
			l2=a[i];
		}
	}
	printf("\n First Largest is %d ",l1);
	printf("\n Second Largest is %d ",l2);
	
}

