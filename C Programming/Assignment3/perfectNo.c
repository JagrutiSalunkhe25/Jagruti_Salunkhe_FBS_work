//perfect no

#include<stdio.h>
int main()
{
	int no,sum=0;
	scanf("%d",&no);
	
	for(int i=1;i<=no/2;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	
	if(no==sum)
	{
		printf("perfect no");
	}
	else
	{
		printf("not perfect no");
	}
}