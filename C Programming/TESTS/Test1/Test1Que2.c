//leap year

#include<stdio.h>
int main()
{
	int yr=1900;
	
	if(yr%4==0 && yr%400==0 || yr%100!=0)
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
}