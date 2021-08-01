#include<stdio.h>

void fibo(int);

int main()
{
	int n;
	printf("\n Enter the number ");
	scanf("%d",&n);
	printf("\n Fibbonacci Series is \n");
	fibo(n);
	return 0;
}
void fibo(int n)
{
	int prev=0,current=1,next;
	printf(" %d %d",prev,current);

    for(int i=2;i<n;i++)
	{
		next=prev+current;
	    printf(" %d",next);
	    prev=current;		    
		current=next;
	}	
}

