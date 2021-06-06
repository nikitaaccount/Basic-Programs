#include<stdio.h>

int main()
{
	int a[30],n,e,pos,i;
	printf("\n Enter the size of the array ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	printf("\n Enter the new element  which you want to insert ");
	scanf("%d",&e);
	printf("\n Enter the position where you want to insert ");
	scanf("%d",&pos);
	
	for(i=n-1;i>=pos-1;i--)
	    a[i+1]=a[i];

	a[pos-1]=e; 
	n=n+1;
	
	for(i=0;i<n;i++)
	    printf(" %d ",a[i]);
	
	return 0;	
}
