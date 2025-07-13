//Perfect no in range

#include<stdio.h>

int perfect();
int j;
int main()
{
	perfect();	
	printf("%d ",j);
}

int perfect()
{
	int fir,last,sum=0;
	
	scanf("%d",&fir);
	scanf("%d",&last);
	
	for( j=fir;j<=last;j++)
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
				return j;
			}
	}
}