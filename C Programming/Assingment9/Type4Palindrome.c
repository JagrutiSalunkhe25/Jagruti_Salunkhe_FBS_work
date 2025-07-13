//palindrome

#include<stdio.h>

int isPalindrome(int no);
int temp,sum=0,rev=0;

int main()
{
	int no1;
	scanf("%d",&no1);
	 temp=no1;
	
	if(isPalindrome(no1))
	{
		printf("is palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	

}


int isPalindrome(int no)
{
	while(no!=0)
	{
		int rem =no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	
	if(temp==rev)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}