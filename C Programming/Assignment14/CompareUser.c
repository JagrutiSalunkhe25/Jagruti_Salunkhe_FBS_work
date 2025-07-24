//compare 2 strings

#include<stdio.h>
int compare(char* str1,char* str2);
int main()
{
	char str1[10];
	char str2[10];
	scanf("%s",str1);
	scanf("%s",str2);
	int res=compare(str1,str2);
	printf("%d",res);
}

int compare(char* str1,char* str2)
{
	int count=0,i=0;
	while(str1[i]!='\0' || str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			count++;
		}
		i++;
	}
	if(count>0)
	{
		return 0;
	}
	else
	{
	    return 1;
	}
}