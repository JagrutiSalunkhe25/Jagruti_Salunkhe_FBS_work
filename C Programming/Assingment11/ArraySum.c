//find sum 

#include<stdio.h>
int main()
{
	int arr[6];
	//create array
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int sum=0;
	for(int i=0;i<6;i++)
	{
		
		sum=sum+arr[i];
		
	}
	printf("sum is : %d",sum);
	
	printf("\n");
}