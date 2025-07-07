//Amstrong no in given range

#include<stdio.h>
int main()
{
	int fir,last,sum=0;
	
	scanf("%d",&fir);
	scanf("%d",&last);
	
	for(int i=fir;i<=last;i++)
	{
		int temp=i;
		sum=0;
	    while(temp!=0)
		{
			int rem=temp%10;
			sum=sum+rem*rem*rem;
			temp=temp/10;
		}
		if(i==sum)
		{
			printf("%d ",i);
		}	
	}	
}