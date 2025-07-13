//prime or not

#include<stdio.h>

int isPrime();
int main()
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


int isPrime()
{
	int no,count=0;
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