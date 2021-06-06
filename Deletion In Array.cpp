#include<stdio.h>

int main()
{
	int a[30],n,e,pos,del,i;
	printf("\n Enter the size of the array ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	printf("\n Enter the position where you want to delete ");
	scanf("%d",&pos);
	
	if(pos>=n+1)
	{
		printf("\n Deletion Not Possible ");
	}
	else
	{
		del=a[pos-1];
	    for(i=pos-1;i<n-1;i++)
	       a[i]=a[i+1];
        n=n-1;
	    printf("\n Deleted Element is %d ",del);
	    
	    printf("\n Array After Deletion ");
	    for(i=0;i<n;i++)
	       printf(" %d ",a[i]);
	}
	return 0;	
}
