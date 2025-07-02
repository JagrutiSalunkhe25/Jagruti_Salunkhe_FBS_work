//equilateral, isosceles, or scalene.

#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter side 1 :");
	scanf("%d",&a);
	
	printf("enter side 2 :");
	scanf("%d",&b);
	
	printf("enter side 3 :");
	scanf("%d",&c);
	
	if(a==b && b==c && a==c)
	{
		printf("equilateral triangle");
	}
	else if(a!=b && b!=c && c!=a)
	{
		printf("scalene triangle");
	}
	else
	{
		printf("isoceles triangle");
	}
	
}