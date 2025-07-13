//menu driven 

#include<stdio.h>

    int oddEven();
	int isPrime();
	int isPalindrome();
	int posNeg();
	
    int no;
    
    
int main()
{
	
    scanf("%d",&no);
    
    char opt;
    printf("enter options from 1 to 4:");
    scanf(" %c",&opt);
    
    if(opt=='1')
    {
    	if(oddEven())
    	{
    	
			printf("no is even");
				
		}
		else
		{
				printf("no is odd");
		}	
		
	}
	
	else if(opt=='2')
	{
			if(isPrime())
			{
				printf("prime no");
			}
			else
			{
				printf("not prime no");
			}
	}
	
	else if(opt=='3')
	{
		if(isPalindrome())
			{
				printf("is palindrome");
			}
			else
			{
				printf("not palindrome");
			}
	}
	
	else if(opt=='4')
	{
		if(posNeg())
			{
				printf("no is positive");
			}
			else
			{
				printf("no is negative");
			}
	}
	

}

int oddEven()
{
	if(no%2==0)
			{
				return 1;
				
			}
			else
			{
				return 0;
		    }
}

int isPrime()
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
				return 1;
			}
			else
			{
				return 0;
			}
}

int isPalindrome()
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
				return 1;
			}
			else
			{
			    return 0;
			}
}

int posNeg()
{
	if(no>=0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
}