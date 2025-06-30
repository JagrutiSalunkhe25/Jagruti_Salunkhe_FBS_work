//scanf

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter value a :");
	scanf("%d",&a);
	
	printf("enter value b :");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("a is greater than b");
	}
	else
	{
		printf("b is greater than a");
	}
}
