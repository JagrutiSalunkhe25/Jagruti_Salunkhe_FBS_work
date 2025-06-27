//sum of 4 digit no

#include<stdio.h>
int main()
{
	int no=1234;
	int d1=no%10;
	int q1=no/10;
	
	int d2=q1%10;
	int q2=q1/10;
	
	int d3=q2%10;
	int q3=q2/10;
	
	int d4=q3%10;
	int q4=q3/10;
	
	int sum=d1+d2+d3+d4;
	printf("%d\n",sum);
	
	int rev=d1*1000+d2*100+d3*10+d4;
	printf("%d",rev);
	
}