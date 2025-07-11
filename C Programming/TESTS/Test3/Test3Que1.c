//EVEN ODD NO FROM RANGE

#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("even no :");
	
	for(int i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			
			printf("%d ",i);
		}
	}
	printf("\n");
	printf("odd no :");
	for(int i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
			
			printf("%d ",i);
		}
	}
}