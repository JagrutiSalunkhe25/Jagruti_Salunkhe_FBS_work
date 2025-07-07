//Perfect no in range

#include<stdio.h>
int main()
{
	int fir,last,sum=0;
	
	scanf("%d",&fir);
	scanf("%d",&last);
	
	for(int j=fir;j<=last;j++)
	{
		sum=0;
			for(int i=1;i<=j/2;i++)
			{
				if(j%i==0)
				{
					sum=sum+i;
				}
			}
			
			if(j==sum)
			{
				printf("%d ",j);
			}
	}
		
	
}