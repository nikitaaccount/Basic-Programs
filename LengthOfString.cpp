 #include<stdio.h>
 
 int main()
 {
 	char str[60];
	int len=0,i;
	printf("\n Enter the string ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	   len++;
	printf("\n Length of a string is %d ",len);
 }
 
 
 
 
 
 
 
