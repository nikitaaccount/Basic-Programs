#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i,len,ch;
	printf("\n Enter the string ");
	gets(str);
	len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		ch=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=ch;	
	}
	printf("\n Reverse is %s ",str);
	return 0;
}
