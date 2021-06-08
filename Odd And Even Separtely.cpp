#include<stdio.h>

int main()
{
	int a[30],b[30],c[30];
	int n,i,j=0,k=0;
	printf("\n Enter the size of the array ");
	scanf("%d",&n);
	
	printf("\n Enter the elements of the array ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	printf("\n Even Numbers are ");
	for(i=0;i<j;i++)
	{
		printf(" %d ",b[i]);
	}
	printf("\n Odd Numbers are ");
	for(i=0;i<k;i++)
	{
		printf(" %d ",c[i]);
	}
}
