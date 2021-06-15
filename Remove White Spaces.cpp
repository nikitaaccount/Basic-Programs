#include<stdio.h>

int main()
{
   /* o(n^2) time
    char str[60];
	int len,i,j;
	printf("\n Enter the string ");
	gets(str);
	for(len=0;str[len];len++);
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		{
			for(j=i;j<len;j++)
			{
				str[j]=str[j+1];
	     	}
	     	len--;
		}
	}
	printf("\n String after removing whitespaces ");
	puts(str);
	return 0;  */
	
	char str[60];
	int len,i,count=0;
	
	printf("\n Enter the string ");
	gets(str);
	for(len=0;str[len];len++);
	for(i=0;i<len;i++)
	{
		if(str[i]!=' ')
		   str[count++]=str[i];
    }  
    str[count]='\0';
    printf("\n String after removing whitespaces ");
	puts(str);
    return 0;
}

