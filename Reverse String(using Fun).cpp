#include<stdio.h>
#include<string.h>

int main()
{
	char s[20];
	printf("\n Enter the string ");
	gets(s);
	strrev(s);
	printf(" %s ",s);
	return 0;
}
