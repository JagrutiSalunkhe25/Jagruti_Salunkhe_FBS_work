#include<stdio.h>

void MinHr();
int main()
{
	MinHr();
}

void MinHr()
{
	int count,min=130,rem;
	
	count=min/60;
	rem=min%60;
	
	printf(" %d hr and %d mins",count,rem);
}