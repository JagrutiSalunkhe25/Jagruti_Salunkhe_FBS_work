//perfect no

#include<stdio.h>

void perfect(int no);
int main()
{
	int no;
	scanf("%d",&no);
	
	perfect(no);
}

void perfect(int no)
{
	int sum=0;

	
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