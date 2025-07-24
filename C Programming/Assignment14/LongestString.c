//Write a program to check the string is palindrome or not.

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char str[10];
	char res[10];
	printf("enter string1 : ");
	scanf("%s",str);
	palindrome(str);
}

void palindrome(char* str)
{
	int count=0,ans=-1;
	int i=0,j=0;
	while(str[i]!='\0')
	{
		while(str[j]!=' ')
    	{
		count++;
		j++;
    	}
    	
    	max(ans,count);
    	printf("%d",j);
    	i++;
	}
	
}