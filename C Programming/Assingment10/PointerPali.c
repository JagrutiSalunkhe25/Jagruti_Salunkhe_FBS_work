//palindrome

#include<stdio.h>

void palid(int* no);

int main()
{
	int no;
	scanf("%d",&no);
	
     palid(&no);
}

void palid(int* no)
{
	int sum=0,rev=0;
	int temp=*no;	
	
	while(*no!=0)
	{
		int rem =*no%10;
		rev=rev*10+rem;
		*no=*no/10;
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