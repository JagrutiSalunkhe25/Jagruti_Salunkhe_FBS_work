//concat string

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]="first";
	char des[]="bit";
	
	
	concat(str,des);
}

void concat(char* str,char* des)
{
	int len1=strlen(str);
	int len2=strlen(des);
	
	int i=0;
	while(des[i]!='\0')
	{
		str[len1]=des[i];
		len1++;
		i++;
	}
	str[len1+len2]="\0";
	printf("%s",str);
}