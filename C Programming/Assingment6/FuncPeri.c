//Write a C program to input the length and width of a rectangle and find its perimeter.

#include<stdio.h>

void peri();
int main()
{
	peri();
}

void peri()
{
	int len=10,wid=30;
    int peri=2*(len + wid);
    printf("perimeter is %d",peri);
}