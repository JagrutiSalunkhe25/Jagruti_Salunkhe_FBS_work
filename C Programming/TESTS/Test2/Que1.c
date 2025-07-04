//electricity bill

#include<stdio.h>
int main()
{
	int no,totalbill;
	printf("enter no of units :");
	scanf("%d",&no);
	
	if(no>=1 && no<=50)
	{
		totalbill=no*30;
	}
	else if(no>=51 && no<=150)
	{
		totalbill=no*40;
	}
	else if(no>=151)
	{
		totalbill=no*50;
	}
	else
	{
		printf("invalid");
	}
	printf("total bill is:%d",totalbill);

}