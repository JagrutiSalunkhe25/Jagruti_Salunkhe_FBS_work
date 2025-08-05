//travel ticket

#include<stdio.h>

int main()
{
	int ticketAmt,sum=0;
	int arr[5],amt[5];
	printf("enter price of ticket");
	scanf("%d",&ticketAmt);
	
	printf("input age of 5 people :");
	
	for(int i=0;i<5;i++)
	{
	    scanf("%d",&arr[i]);	
	}
	
	for(int i=0;i<5;i++)
	{
		if(arr[i]<12)
		{
			amt[i]=ticketAmt-ticketAmt*0.3;
		}
		else if(arr[i]>59)
		{
			amt[i]=ticketAmt-ticketAmt*0.5;
		}
		else
		{
			amt[i]=ticketAmt;
		}
	}
	
	for(int i=0;i<5;i++)
	{
		sum=sum+amt[i];
	}
	printf("total expense for travel is : %d ",sum);
}