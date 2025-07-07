#include<stdio.h>

int main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10-i;j++)
		{
			printf(" ");
		}
		
		
		for(int j=i;j<i*2-1;j++)
		{
			printf("* ");
	}
		
		
		printf("\n");
	}
	
}