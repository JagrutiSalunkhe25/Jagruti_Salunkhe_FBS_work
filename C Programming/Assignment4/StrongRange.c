//strong no in range

#include<stdio.h>
int main()
{
	int fir,last,fact=1,sum=0;
	scanf("%d",&fir);
	scanf("%d",&last);
	
	
	for(int j=fir;j<=last;j++)
	{
		int temp=j;
		sum=0;
		while(temp!=0)
		{
			int rem=temp%10;
			fact=1;
			for(int i=1;i<=rem;i++)
			{
				fact=fact*i;
			}
			sum=sum+fact;
			temp=temp/10;
			
		}
		
		if(j==sum)
		{
			printf("%d ",j);
		}

	}
	
		
}