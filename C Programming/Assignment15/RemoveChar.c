//WAP to Remove the nth Index Character from a Non-Empty String

#include<stdio.h>
void removeCh(char* str,int n);
int main()
{
	char str[10];
	int n;
	scanf("%s",str);
	scanf("%d",&n);
	removeCh(str,n);
}

void removeCh(char* str,int n)
{
	int i=0;
	while(str[i]!=0)
	{
		if(i==n)
		{
			while(str[i]!=0){
				str[i]=str[i+1];
				i++;
			}
			
		}
		i++;
	}
	printf("%s",str);
}