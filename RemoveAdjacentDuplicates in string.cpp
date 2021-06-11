#include<stdio.h>

char* remove_duplicates(char *s);

int main()
{
	char s[]="AABBBCCDAB";
	printf("%s",remove_duplicates(s));
}
char* remove_duplicates(char *s)
{
	int i,j;
	for(i=0;s[i];i++) // for length of a String
	{
		if(s[i]==s[i+1])
		{
			for(j=i;s[j];j++)
			{
				s[j]=s[j+1];
			}
			i--; // if 3 a are there
		}
	}
	return(s);
}
