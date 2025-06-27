//Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32

#include<stdio.h>
int main()
{
	int cel = 30;
	int faren = (cel * 9/5)+32;
	
	printf("celsius to fahrenhite is %d",faren);
}