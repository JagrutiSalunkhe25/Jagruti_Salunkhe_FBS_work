//length of string

#include<stdio.h>
int main()
{
	char str[10];
	scanf("%s",str);
	len(str);

}

void len(char* str)
{
	int count=0,i=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	
	printf("%d",count);
}