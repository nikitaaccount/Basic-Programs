#include<stdio.h>

int main()
{
	int a[30],i,n,j,c;
	printf("\n Enter the size of the array ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{  
	    c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[j]==0)
			   continue;
			   
			else if(a[i]==a[j])
			{
			    c++;
				a[j]=0;	
			}
		}
		if(c>1)
	      printf(" \n %d repeated %d times ",a[i],c);
		
	}
	return 0;
}
