//sum of 1st nd last digit

#include<stdio.h>

int main()
{
	int no,sum=0;
	scanf("%d",&no);
	
	int last=no%10,first=0;
    while(no!=0)
    {
    	no=no/10;
    	if(no<10)
    	{
    		first=no;
    		break;
		}
	}
	sum=first+last;
	printf("%d",sum);
	
	
}