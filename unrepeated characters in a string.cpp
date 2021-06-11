#include<stdio.h>
#include<string.h>

int main()
{
	char s[30];
	int i,j,len,count;
	printf("\n Enter the string ");
	scanf("%s",&s);
	len=strlen(s);
	
	printf("\n Unrepeated Characters in a string are ");
	for(i=0;i<len;i++)
	{
		count=0;
		for(j=i+1;j<len;j++)
		{
			if(s[j]==0)
			{
		    	count++;
			    continue;
			}	  
			else if(s[i]==s[j])
			{
				count++;
				s[j]=0;
			}	   
		}
		if(count==0)
		  printf("\n%c",s[i]);
	}
    return 0;
}
