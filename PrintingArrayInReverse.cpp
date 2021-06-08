#include<stdio.h>

int main()
{
	int a[30],n,i;
	printf("\n Enter the size of the array ");
	scanf("%d",&n);
	
	printf("\n Enter the elements of the array ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);

	printf("\n Reverse Order is ");
	for(i=n-1;i>=0;i--)
	    printf(" %d ",a[i]);
	
	return 0;	
}
