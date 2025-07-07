//inverted right angled triangle

#include<stdio.h>
int main()
{
	int a=5;
	for(int i=a;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

