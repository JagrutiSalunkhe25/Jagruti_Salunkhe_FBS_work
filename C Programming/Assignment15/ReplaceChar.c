//WAP Replace all Occurrences of ‘a’ with $ in a String

#include<stdio.h>
char* searchChar(char* str);

int main()
{
	char str[10];
	printf("enter string : ");
	scanf("%s",str);
	
	searchChar(str);
	printf("%s",str);
}

char* searchChar(char* str)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
	   if(str[i]=='a')
	   {
	   	 str[i]='$';
	   }
	   i++;	
	}
	return str;  
}