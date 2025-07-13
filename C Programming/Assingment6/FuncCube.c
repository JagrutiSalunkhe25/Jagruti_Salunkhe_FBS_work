//Write a C program to find the square and cube of a given number.

#include<stdio.h>

void cube();
int main()
{
  cube();	
}

void cube()
{
	int l=10;
	int square=l*l;
	int cube = l*l*l;
	
	printf("square is %d cube is %d",square,cube);
}