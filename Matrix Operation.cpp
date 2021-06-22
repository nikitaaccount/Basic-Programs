#include<stdio.h>

int main()
{
	int a[3][3],i,j,k,s1,s2,s3=0;
	printf("\n Enter the matrix ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{		
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		s1=s2=0;
		for(j=0;j<3;j++)
		{
		    s1=s1+a[i][j];
		    s2=s2+a[j][i];
		    if(i==j)
		      s3=s3+a[i][j];
		}
		printf("\n %d Row Sum = %d ",i+1,s1);
		printf("\n %d Col Sum = %d ",i+1,s2);		
	}
	printf("\n Diagonal Sum = %d ",s3);
	return 0;
	
}
