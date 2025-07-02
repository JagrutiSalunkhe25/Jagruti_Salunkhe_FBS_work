//greater among three

#include<stdio.h>

int main()
{
	int a=10,b=30,c=50;
	
	if(a>b && a>c)
	{
		printf("a is greater");
	}
	else if(b>a && b>c)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
}