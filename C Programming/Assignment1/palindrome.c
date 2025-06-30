//palindrome 

#include<stdio.h>

int main()
{
	int no=131;
	
	int r1=no%10;
	int q1=no/10;
	
	int r2=q1%10;
	int q2=q1/10;
	
	int r3=q2%10;
	
	int rev=r1*100+r2*10+r3;
	
	if(no==rev)
	    printf("palindrome");
	else
	    printf("not palindrome");    
	    
}