//sum of no

#include<stdio.h>

int main()
{
	int start,end,sum=0;
	printf("enter start :");
	scanf("%d",&start);
	printf("enter end :");
	scanf("%d",&end);
	
	for(int i=start;i<=end;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}