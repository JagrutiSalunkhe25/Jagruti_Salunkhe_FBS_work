//lowercase

#include<stdio.h>
int main()
{
	char str[10];
	scanf("%s",str);
	
	lower(str);
}

void lower(char* str)
{
	for(int i=0;i<10;i++)
	{
		if((int)str[i]>=65 && (int)str[i]<=90)
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
}