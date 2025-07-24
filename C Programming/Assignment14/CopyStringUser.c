//copy string

#include<stdio.h>
int main()
{
	char str[10];
	
	scanf("%s",str);
	copy(str);2

}

void copy(char*str)
{
	int i=0;
	char str1[10];
	while(str[i]!=0)
	{
		str1[i]=str[i];
		i++;
	}
	
	printf("copied string is : ");3
	printf("%s",str1);
}