//Write a C program to input the base and height of a triangle and calculate its area.

#include<stdio.h>

void TriArea(int base,int height);
int main()
{
	int base=20,height=30;
   TriArea(base,height);
}

void TriArea(int base,int height)
{
	
	int area= (base*height)/2;
	printf("area is %d",area);
}