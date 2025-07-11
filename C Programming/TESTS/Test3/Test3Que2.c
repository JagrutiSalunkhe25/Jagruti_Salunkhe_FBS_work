// add alternate no from given range

#include<stdio.h>

int main()
{
	int start,end,sum=0;
	scanf("%d",&start);
	scanf("%d",&end);
	
	for(int i=start;i<=end;i=i+2)
	{
		sum=sum+i;
	}
	
	printf("sum is : %d",sum);
}