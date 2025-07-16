//take two array and sum in third array

#include<stdio.h>
int main()
{
	int arr[6],arr1[6],fin[6];
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\n");
	for(int i=0;i<6;i++)
	{
		fin[i]=arr[i]+arr1[i];
		printf("%d ",fin[i]);
	}
	
}
