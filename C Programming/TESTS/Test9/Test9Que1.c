//remove duplicate char from string

#include<stdio.h>

int main()
{
	char str[20];
	char new1[20]={0};
	gets(str);
	
	int i=0,count=0,k=0;
	
	for(int i=0;str[i]!='\0';i++)
	{
		count=0;
		for(int j=0;j<k;j++)
		{
			if(new1[j]==str[i])
			{
				count++;
				break;
			}
		}
		
		if(count==0)
		{
			new1[k]=str[i];
			k++;
		}
	}
	new1[k]='\0';
	printf("%s",new1);
}