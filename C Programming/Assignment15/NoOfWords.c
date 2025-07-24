//WAP to Calculate the Number of Words Present in a String

#include<stdio.h>
int vowel(char* str);

int main()
{
	char str[10];
	printf("enter string : ");
	gets(str);
	
	int res=vowel(str);
	printf("%d",res);
}

int vowel(char* str)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
	   	   count++;
	
	   i++;	
	}
	return count+1;  
}