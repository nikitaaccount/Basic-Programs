 #include<stdio.h>
 
 int main()
 {
 	char str[60];
	int i,c1=0,c2=0,c3=0,c4=0;
	printf("\n Enter the string ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		   c1++;
		   
		else if(str[i]>=97 && str[i]<=122)
		   c2++;
		   
		else if(str[i]>=48 && str[i]<=57)
		   c3++;
		
		else
		   c4++;	 
	}
	printf("\n Uppercase Characters %d ",c1);
	printf("\n Lowercase Characters %d ",c2);
	printf("\n Digits %d ",c3);
	printf("\n Special Symbols %d ",c4);

  return 0;	
 }
 
 
 
 
 
 
 
