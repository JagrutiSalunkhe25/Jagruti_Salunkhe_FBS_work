//Write a program to check the string is palindrome or not.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	char res[10];
	printf("enter string1 : ");
	gets(str);
	palindrome(str,res);
}

void palindrome(char* str,char* res)
{
	strcpy(res,str);
	strrev(str);
	int a=strcmp(res,str);
	printf("%d\n",a);
	if(a==0)
	{
		printf("\npalindrome");
	}
	else
	  printf("\nnot palindrome");
}