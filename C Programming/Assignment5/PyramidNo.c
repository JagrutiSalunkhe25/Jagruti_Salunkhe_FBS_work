//pyramid no1

#include<stdio.h>

int main()
{
	int no=10;
	for(int i=1;i<no;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}