// exchange data at xth and y th  position of array

#include<stdio.h>

int main()
{
	int arr[10],temp=0;
	int x=3,y=5;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	temp=arr[x-1];
	arr[x-1]=arr[y-1];
	arr[y-1]=temp;
	
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}