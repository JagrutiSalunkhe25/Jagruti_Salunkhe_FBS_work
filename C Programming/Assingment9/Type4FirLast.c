//sum of 1st nd last digit

#include<stdio.h>

int FirLast(int no);
int first=0,sum=0,last;

int main()
{
	int no1;
	scanf("%d",&no1);
	
	 last=no1%10;
   
	int ans=FirLast(no1);
	printf("%d",ans);
}


int FirLast(int no)
{
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
	return sum;
}