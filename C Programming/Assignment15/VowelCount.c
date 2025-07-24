//WAP to Count the Number of Vowels in a String

#include<stdio.h>
int vowel(char* str);

int main()
{
	char str[10];
	printf("enter string : ");
	scanf("%s",str);
	
	int res=vowel(str);
	printf("%d",res);
}

int vowel(char* str)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
	   if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
	   {
	   	 count++;
	   }
	   i++;	
	}
	return count;  
}