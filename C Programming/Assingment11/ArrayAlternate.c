//alternate elements in array

#include<stdio.h>
int main()
{
	int arr[6];
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\n");
	
	for(int i=0;i<6;i=i+2)
	{
	     printf("%d ",arr[i]);
	}
}