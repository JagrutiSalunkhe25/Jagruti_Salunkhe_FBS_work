#include<stdio.h>
int main()
{
	int arr[6];
	//create array
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	
	
	//find max
	int max=arr[0];
	for(int i=0;i<6;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("max no is : %d",max);
	
	printf("\n");
	
	
	
	//sum of array
	int sum=0;
	for(int i=0;i<6;i++)
	{
		
			sum=sum+arr[i];
		
	}
	printf("sum is : %d",sum);
	
	printf("\n");
	
	
	
	//reverse array
	for(int i=5;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}