//WAP to Remove the Characters of Odd Index Values in a String

#include<stdio.h>
void removeCh(char* str);
int main()
{
	char str[10];
	int n;
	scanf("%s",str);
	removeCh(str);
}

void removeCh(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(i%2==1)
		{
			int j=i;
			while(str[j]!='\0')
			{
				str[j]=str[j+1];
				j++;
			}
			
		}
		i++;
	}
	printf("%s",str);
}