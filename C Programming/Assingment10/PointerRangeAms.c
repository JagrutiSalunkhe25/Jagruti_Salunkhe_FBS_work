//Amstrong no in given range

#include<stdio.h>

void ams(int* fir,int*last);
int main()
{
	int fir,last;
	
	scanf("%d",&fir);
	scanf("%d",&last);
	
	ams(&fir,&last);
	
	
}

void ams(int* fir,int*last)
{
	int sum=0;
	for(int i=*fir;i<=*last;i++)
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