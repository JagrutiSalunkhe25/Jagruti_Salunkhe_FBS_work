//min max in array

#include<stdio.h>
int main()
{
	int arr[6];
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\n");
	
	
	int max=arr[0];
	for(int i=0;i<6;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("max no is : %d",max);
	
//	int max=arr[0];
	for(int i=0;i<6;i++)
	{
		if(arr[i]<max)
		{
			max=arr[i];
		}
	}
	printf("min no is : %d",max);
	
	printf("\n");
}