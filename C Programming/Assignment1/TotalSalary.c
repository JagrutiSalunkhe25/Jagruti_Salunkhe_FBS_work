//total salary

#include<stdio.h>
int main()
{
	int sal=9000,ta,da,hra,totalsal;
	
	if(sal<=5000)
	{
		ta=0.10*sal;
		da=0.20*sal;
		hra=0.25*sal;
	}
	else
	{
		ta=0.15*sal;
		da=0.25*sal;
		hra=0.30*sal;
	}
	
	totalsal=ta+da+hra;
	printf("%d",totalsal);
}