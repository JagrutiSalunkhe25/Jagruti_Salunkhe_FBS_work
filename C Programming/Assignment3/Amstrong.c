//Amstrong no

#include<stdio.h>
int main()
{
	int no,sum=0;
	
	scanf("%d",&no);
	int temp=no;
	
	while(no!=0)
	{
		int rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
	}
	if(temp==sum)
	{
		printf("amstrong no");
	}
	else
	{
		printf("not amstrong no");
	}
}