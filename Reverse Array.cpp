#include<stdio.h>

int main()
{
	int a[30],n,i,j,temp;
	printf("\n Enter the size of the array ");
	scanf("%d",&n);
	
	printf("\n Enter the elements of the array ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;	
	}
	
	printf("\n Array after reversing ");
	for(i=0;i<n;i++)
	    printf(" %d ",a[i]);
	
	return 0;	
}
