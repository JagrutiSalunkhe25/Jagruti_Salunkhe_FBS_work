//WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include<stdio.h>
int main()
{
	char str1[10];
	char str2[10];
	printf("enter string1 : ");
	scanf("%s",str1);
	printf("enter string2 : ");
	scanf("%s",str2);
	largeString(str1,str2);
}

void largeString(char* str1,char* str2)
{
	int c1=0,c2=0,i=0,j=0;
	while(str1[i]!='\0')
	{
		c1++;
		i++;
	}
	
	while(str2[j]!='\0')
	{
		c2++;
		j++;
	}
	
	if(c1>c2)
	{
		printf("string 1 is greater");
	}
	else
	{
		printf("string 2 is greater");
	}
}