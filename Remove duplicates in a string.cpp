#include<stdio.h>

int main()
{
	char str[20],str1[20];
	int i,j,k,m=0;
	printf("\n Enter the string ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				for(k=j;str[k]!='\0';k++)
				{
					str[k]=str[k+1];
				}
			}
		}
	}
	printf("\n String after removing duplicates %s ",str);
	
	// for adding commas
	for(i=0;str[i]!='\0';i++)
	{
	  str1[m++] =str[i];
	  str1[m++]= ',';	
	}
	str1[m++]='\0';
	printf("\n String after removing duplicates %s ",str1);
	return 0;
	
}
