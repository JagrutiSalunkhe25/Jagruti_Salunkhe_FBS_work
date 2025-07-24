//uppercase

#include<stdio.h>
int main()
{
	char str[10];
	scanf("%s",str);
	upper(str);
	
}

void upper(char* str)
{
	for(int i=0;i<10;i++)
	{
		if((int)str[i]>=97 && (int)str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
printf("%s",str);
}