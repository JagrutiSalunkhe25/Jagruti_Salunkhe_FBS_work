//palindrome

#include<stdio.h>

void palid();

int main()
{
     palid();
}

void palid()
{
		int no,sum=0,rev=0;
	scanf("%d",&no);
	int temp=no;
	
	while(no!=0)
	{
		int rem =no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	
	if(temp==rev)
	{
		printf("is palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}