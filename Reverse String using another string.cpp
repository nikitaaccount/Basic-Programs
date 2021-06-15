#include<stdio.h>

int main()
{
	char str1[30],str2[30];
	int i,j,k;
	printf("\n Enter the string ");
	gets(str1);
	for(i=0;str1[i];i++);
	for(j=i-1,k=0;j>=0;j--,k++)
	{
		str2[k]=str1[j];
	}
	str2[k]='\0';
	printf("\n Reverse String is %s ",str2);
	return 0;
}
