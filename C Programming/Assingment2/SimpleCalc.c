//simple calculation

#include<stdio.h>

int main()
{
	int a,b;
	char ch;
	printf("enter no 1 :");
	scanf("%d",&a);
	
	printf("enter no 2 :");
	scanf("%d",&b);
	
	printf("enter operation :");
	scanf(" %c",&ch);
	
	if(ch=='+')
	{
		printf("%d",a+b);
	}
	else if(ch=='-')
	{
		printf("%d",a-b);
	}
	else if(ch=='%')
	{
		printf("%d",a%b);
	}
	else if(ch=='/')
	{
		printf("%d",a/b);
	}
	else if(ch=='*')
	{
		printf("%d",a*b);
	}
	else
	{
		printf("invalid input");
	}
}