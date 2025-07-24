//scan a char in string

#include<stdio.h>
int searchChar(char* str,char ch);
int main()
{
	char str[10];
	printf("enter string : ");
	scanf("%s",str);
	
	char ch;
	printf("enter char : ");
	scanf(" %c",&ch);
	
	int res=searchChar(str,ch);
	printf("%d",res);
}

int searchChar(char* str,char ch)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
	   if(str[i]==ch)
	   {
	   	 count++;
	   	 
	   }
	   i++;	
	}
	if(count>0)
	   return 1;
	else
	   return 0;   
}