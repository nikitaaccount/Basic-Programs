#include<stdio.h>

int main()
{
	int a[2][3]={5,10,15,20,25,30};
	
	int (*p)[2][3]=&a; // p is a pointer to 2d array of integer datatype.
	
	printf("\n %d ",***p);
	
	printf("\n %d ",***(p+1));
	
	printf("\n %d ",**(*p+1));
	
	printf("\n %d ",*(*(*p+1)+2));
	
	return 0;
	
}
