 #include<stdio.h>
 
 int main()
 {
 	char str1[30],str2[30];
	int i;
	printf("\n Enter the string ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	   str2[i]=str1[i];
	str2[i]='\0';
	
	printf("\n First string is %s ",str1);
	printf("\n Second string is %s ",str2);
	return 0;
 }
 
 
 
 
 
 
 
