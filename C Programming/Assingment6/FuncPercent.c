//Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.

#include<stdio.h>

void percent();
int main()
{
	percent();
	
}

void percent()
{
int a=30,b=22,c=43,d=38,e=45;
	float total=a+b+c+d+e;
	float per=(total/250)*100;
	
	printf("total is %f and percent is %f",total,per);	
}