//scanf

#include<stdio.h>

void greaterNo();
int main()
{
	greaterNo();	

}

void greaterNo()
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