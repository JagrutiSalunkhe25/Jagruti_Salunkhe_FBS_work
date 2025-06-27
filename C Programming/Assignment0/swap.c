
//Write a C program to swap two numbers using a temporary third variable.

#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("value of a is %d and b is %d",a,b);

}