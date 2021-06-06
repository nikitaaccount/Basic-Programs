#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	int len,i,count=0;
	printf("\n Enter the string ");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
		   count++;
		}
	}
    printf("\n No of vowels are %d ",count);
	return 0;
}
