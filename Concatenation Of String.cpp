#include<stdio.h>

int main()
{
	char str1[30],str2[30];
	int i,j;
	printf("\n Enter the first string ");
	gets(str1);
	printf("\n Enter the second string ");
	gets(str2);
	
	for(i=0;str1[i];i++);
	
	str1[i]=' ';
	i++;

	for(j=0;str2[j]!='\0';j++)
	{
		str1[i]=str2[j];
		i++;
	}
	str1[i]='\0';
	printf("\n Concatenated String is %s ",str1);
	return 0;
}
