#include<stdio.h>
#include<string.h>

int main()
{
	char str[80], str1[80];
	int i=0,j=0;
	printf("\n Enter string ");
	gets(str);
	while(str[i]!='\0')
	{
		if(!(str[i]==' '&& str[i+1]==' '))
		{
			str1[j]=str[i];
			j++;
		}
		i++;
	}
	str1[j]='\0';
	printf("\n String after removing extra spaces %s ",str1);
	return 0;
}
