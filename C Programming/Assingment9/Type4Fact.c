//factorial

#include<stdio.h>

void factorial(int a);
int fact=1;

int main()
{
	int no1;
	scanf("%d",&no1);
		
	factorial(no1);
	
}

void factorial(int no)
{
	for(int i=1;i<=no;i++)
	{
	  fact=fact*i;	
	}
	printf("%d",fact);
}