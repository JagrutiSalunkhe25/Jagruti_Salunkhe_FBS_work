//factorial

#include<stdio.h>

int main()
{
	int no,fact=1;
	scanf("%d",&no);
	
	for(int i=1;i<=no;i++)
	{
	  fact=fact*i;	
	}
	printf("%d",fact);
	
}