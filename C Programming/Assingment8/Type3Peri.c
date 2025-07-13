//Write a C program to input the length and width of a rectangle and find its perimeter.

#include<stdio.h>

void peri(int len,int wid);
int main()
{
	int len=10,wid=30;
	peri( len,wid);
}

void peri(int len,int wid)
{
	
    int peri=2*(len + wid);
    printf("perimeter is %d",peri);
}