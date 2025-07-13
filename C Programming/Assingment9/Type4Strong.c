//strong no

#include<stdio.h>

int isStrong(int a);
int fact=1,sum=0,no1,temp;

int main()
{
	int no1;
	scanf("%d",&no1);
	temp=no1;
	
	if(isStrong(no1))
	{
		printf("is strong no");
	}
	else
	{
		printf("not a strong");
	}
	
}



int isStrong(int no)
{
	while(no!=0)
	{
		int rem=no%10;
		fact=1;
		for(int i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		no=no/10;
		
	}
	
	if(temp==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}