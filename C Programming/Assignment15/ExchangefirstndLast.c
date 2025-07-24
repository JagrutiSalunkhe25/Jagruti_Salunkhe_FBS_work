//WAP to Form a New String where the First Character and the Last Character have
//been Exchanged

#include<stdio.h>
#include<string.h>
char* exchangeChar(char* str);

int main()
{
	char str[10];
	printf("enter string : ");
	scanf("%s",str);
	
	exchangeChar(str);
	printf("%s",str);
}

char* exchangeChar(char* str)
{
	char temp;
	temp=str[0];
	str[0]=str[strlen(str)-1];
	str[strlen(str)-1]=temp;
	return str;  
}