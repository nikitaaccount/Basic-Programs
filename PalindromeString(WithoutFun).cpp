#include<stdio.h>

int main()
{
	char str[30];
	int i,len,flag=0;
	printf("\n Enter the string ");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	     printf("\n String is Palindrome ");
	else
	     printf("\n String is not Palindrome ");
	return 0;
}
