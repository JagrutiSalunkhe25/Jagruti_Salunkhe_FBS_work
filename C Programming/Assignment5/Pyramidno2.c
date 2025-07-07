//pyramid

#include<stdio.h>

int main()
{
	int no=10;
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",no);
			no--;
		}
		printf("  ");
		printf("\n");
		
	}
}