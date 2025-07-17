//print factors in range

#include<stdio.h>

int main()
{
	int start=10,end=15;
	
	for(int i=start;i<=end;i++)
	{
		printf("%d = ",i);
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}