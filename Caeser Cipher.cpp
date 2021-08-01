#include<stdio.h>

int main()
{
	char message[100];
	int key,i,left;
	printf("\n Enter you plain text ");
	scanf("%s",message);
	
	printf("\n Enter the key ");
	scanf("%d",&key);
	
	if(key<=0)
	   printf("\n Invalid Input");
	   
	else
	{	   
	   for(i=0;message[i]!='\0';i++)
	   {
	   	if(message[i]>=48 && message[i]<=57) //adding key value to numbers
		  {
		   	 if(message[i]+key<=57)
		   	 {
		   	 	message[i]=message[i]+key;
			 }
			 else
			 {
			 	left=(message[i]+key)-57;  
			 	message[i]=47+left;
			 }
	      } 
	    else if(message[i]>=65 && message[i]<=90) // uppercase letters
	    {
	    	if(message[i]+key<=90)
		   	{
		   	 	message[i]=message[i]+key;
			}
			else
			{
			    left=(message[i]+key)-90;
			 	message[i]=64+left;
			}
		}
		else if(message[i]>=97 && message[i]<=122)  // lowercase letters
	    {
	    	if(message[i]+key<=122)
		   	{
		   	 	message[i]=message[i]+key;
			}
			else
			{
			    left=(message[i]+key)-122;
			 	message[i]=96+left;
			}
		}
		    
	   }
	   printf(" The encrypted message is  %s ",message);
   }
   return 0;	
}
