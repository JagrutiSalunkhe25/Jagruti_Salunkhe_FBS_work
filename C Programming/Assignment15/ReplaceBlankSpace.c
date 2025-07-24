//WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>
char* replace(char* str);

int main()
{
	char str[50];
	printf("enter string : ");
	gets(str);
	
	replace(str);
	printf("%s",str);
}

char* replace(char* str)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
	   if(str[i]==' ')
	   {
	   	 str[i]='$';
	   }
	   i++;	
	}
	return str;  
}