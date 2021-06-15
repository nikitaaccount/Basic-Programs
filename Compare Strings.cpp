#include<stdio.h>

int main()
{
	char str1[30],str2[30];
	int i,flag=0;
	printf("\n Enter the first string ");
	gets(str1);
	printf("\n Enter the second string ");
	gets(str2);

	for(i=0;str1[i]!='\0'|| str2[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
		  flag=1;
		  break;
		}
	}
	if(flag==0)
	   printf("\n Strings are equal ");
	
	else
	   printf("\n Strings are not equal ");	
	return 0;
}

