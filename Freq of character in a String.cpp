#include<stdio.h>
#include<string.h>

int main()
{
	char str[20],c;
	int i,count=0;
	printf("\n Enter the string ");
	gets(str);
	printf("\n Enter the character for which you want to find the frequency ");
	scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
	       count++;
	}
	printf("\n %c found %d times ",c,count);
	return 0;	    
}
