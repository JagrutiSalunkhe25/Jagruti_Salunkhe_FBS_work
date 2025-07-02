//prime or not

#include<stdio.h>
int main()
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
		printf("prime no");
	}
	else
	{
		printf("not prime no");
	}
}