#include<stdio.h>


int main()
{
	int a[30],i,n,temp;
	printf("\n Enter the size of the array ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i+=2)
	{
	  temp=a[i];
	  a[i]=a[i+1];
	  a[i+1]=temp;
	}
	printf("\n Array after Swapping ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);;
	}
	return 0;
}
