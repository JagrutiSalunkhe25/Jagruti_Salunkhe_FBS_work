//divisible by 3 & 5

#include<stdio.h>

int main()
{
    int no=15;
	
	if(no%3==0)
	{
		
		if(no%5==0)
	    {
	    	printf("divisible by both");
	    	continue;
	    }	
		printf("divisible by 3");
	} 
//	else if(no%3==0)
//	{
//		printf("divisible by 3");
//	}
	else
	{
		  if(no%5==0)
		  {
		      printf("divisible by 5");
		  }
		  else
		  {
		  	printf("not divisible by 3 & 5");
		  }
	}
}