//Write a C program to convert given minutes into hours and remaining minutes.

#include<stdio.h>
int main()
{
	int count,min=130,rem;
	
	count=min/60;
	rem=min%60;
	
	printf(" %d hr and %d mins",count,rem);
}