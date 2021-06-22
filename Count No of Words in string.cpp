#include<stdio.h>
#include<string.h>
#include<cstdlib>

char* remove_extra_spaces(char *s);
int count_words(char *s);

int main()
{
	char str[100];
	int no_of_words;
	printf("\n Enter a string: ");
	gets(str);
	strcpy(str,remove_extra_spaces(str));
	printf("\n String after removing extra spaces: %s ",str);
	no_of_words=count_words(str);
	printf("\n Number of words: %d ",no_of_words);
	return 0;
}

char* remove_extra_spaces(char *s)
{
	char *p;
	int i=0,j=0;
	p=(char*)malloc(strlen(s)+ 1);
	while(*(s+i))
	{
		while(*(s+i)==' ')
		    i++;
		while(*(s+i)!=' '&& *(s+i)!='\0')
		{
			*(p+j)=*(s+i);
		    i++;
		    j++;
		}
		if(*(s+i)=='\0' && *(p+j-1)==' ')
            j--;
		*(p+j)=*(s+i);
		j++;		   
	}
	return p;
}

int count_words(char *s)
{
	int i=0,count=0;
	while(*(s+i))
	{
		if(*(s+i)==' ')
		   count++;
		i++;
	}
	return(count+1);
}


