#include<stdio.h>

int main()
{
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<10-i+1;j++)
		{
			printf("*");
		}
		
		
		for(int j=i;j<i*2-1;j++)
		{
			printf("  ");
		}
	
		for(int j=1;j<10-i+1;j++)
		{
			printf("*");
		}
		
		
		printf("\n");
	}
	
}