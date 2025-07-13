//menu driven 

#include<stdio.h>

void oddEven();
	void isPrime();
	void isPalindrome();
	void posNeg();
	
    int no ;
    scanf("%d",&no);
    
    char opt;
    printf("enter options from 1 to 4:");
    scanf(" %c",&opt);
    
    
int main()
{
	
    
    if(opt=='1')
    {
    	oddEven();
	}
	
	else if(opt=='2')
	{
			isPrime();
	}
	
	else if(opt=='3')
	{
		isPalindrome();
	}
	
	else if(opt=='4')
	{
		posNeg();
	}
	

}

void oddEven()
{
	if(no%2==0)
			{
				printf("no is even");
				
			}
			else
			{
				printf("no is odd");
		    }
}

void isPrime()
{
		int count=0;
		  	 scanf("%d",&no);
		  	 
		  	 for(int i=1;i<=no;i++)
		  	 {
		  	 	if(no%i==0)
		  	 	{
		  	 		count++;
				}	
			}
			
			if(count==2)
			{
				printf("prime no");
			}
			else
			{
				printf("not prime no");
			}
}

void isPalindrome()
{
	 int sum=0,rev=0;
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

void posNeg()
{
	if(no>=0)
			{
				printf("no is positive");
			}
			else
			{
				printf("no is negative");
			}
}