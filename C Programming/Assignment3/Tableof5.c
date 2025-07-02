//table of 5

#include<stdio.h>
int main()
{
	int no;
	scanf("%d",&no);
	
	for(int i=1;i<=10;i++)
	{
		int x=no*i;
		printf("%d ",x);
	}
}