// Program to convert uppercase to lower case
// A=65-90, a= 97 -122 (65+32=97)

#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	printf("\n Enter the string ");
	scanf("%s",&str);
	printf("\n The given string is %s",str);
	for(int i=0;i<strlen(str);i++)
	{
		if((str[i]>=65) && (str[i]<=90))
		str[i]=str[i]+32;
	}
	printf("\n Converted string is %s",str);
	return 0;	
}
