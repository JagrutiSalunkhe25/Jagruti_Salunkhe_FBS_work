//inverted pyramid pattern

#include<stdio.h>
int main()
{
   for(int i=5;i>0;i--)
	{
		
		for(int j=5;j>=i;j--)
		{
			printf(" ");
		}
		
		for(int j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}