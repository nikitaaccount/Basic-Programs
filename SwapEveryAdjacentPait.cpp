#include<stdio.h>

// swap any two elements using pointers

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
	temp=*(a+1);
	*(a+1)=*(a+4);
	*(a+4)=temp;
	
	printf("\n Array After swapping ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);;
	}
	return 0;
}
