//strong no

#include<stdio.h>
int main()
{
	int no,fact=1,sum=0;
	scanf("%d",&no);
	int temp=no;
	
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
		printf("strong no");
	}
	else
	{
		printf("not strong no");
	}
}