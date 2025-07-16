//odd even among numbers

#include<stdio.h>
int main()
{
	int arr[6];
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\n");
	
	printf("even no : ");

	
	for(int i=0;i<6;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
		
	}
	printf("\n");
	printf("odd no : ");
	
	for(int i=0;i<6;i++)
	{
		if(arr[i]%2==1)
		{
			printf("%d ",arr[i]);
		}
		
	}
}