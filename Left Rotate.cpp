#include<stdio.h>

int main()
{
	int a[30],i,n,j,k,temp;
	printf("\n Enter the size of the array ");
	scanf("%d",&n);
	
	printf("\n Enter the elements of the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the no of rotation ");
	scanf("%d",&k);
	
	for(j=0;j<k;j++)
	{
		temp=a[0];
	    for(i=0;i<n-1;i++)
	    {
		   a[i]=a[i+1];
	    }
	    a[i]=temp;
	}
    printf("\n Array after Rotation ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);;
	}
	return 0;
}
