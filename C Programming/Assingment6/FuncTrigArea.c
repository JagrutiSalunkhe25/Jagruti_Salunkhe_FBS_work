//Write a C program to input the base and height of a triangle and calculate its area.

#include<stdio.h>

void TriArea();
int main()
{
   TriArea();
}

void TriArea()
{
	int base=20,height=30;
	int area= (base*height)/2;
	printf("area is %d",area);
}