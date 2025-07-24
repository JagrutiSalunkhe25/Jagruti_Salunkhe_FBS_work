//mystrncat


#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char des[20];
	scanf("%s",str);
	scanf("%s",des);
	int n;
	scanf("%d",&n);
	
	concat(str,des,n);
}

void concat(char* str,char* des,int n)
{
	int len1=strlen(str);
	int len2=strlen(des);
	
	int i=0;
	while(i<n && des[i]!='\0')
	{
		str[len1]=des[i];
		len1++;
		i++;
	}
	str[len1]='\0';
	printf("%s",str);
}