//sum of 1st nd last digit

#include<stdio.h>

int sum1();
int sum=0;

int main()
{

	sum1();
	printf("%d",sum);
}

int sum1()
{
	int no;
	scanf("%d",&no);
	
	int last=no%10,first=0;
    while(no!=0)
    {
    	no=no/10;
    	if(no<10)
    	{
    		first=no;
    		break;
		}
	}
	sum=first+last;
	return sum;
}