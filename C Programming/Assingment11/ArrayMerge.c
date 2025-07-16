//merge two arrays

#include<stdio.h>
int main()
{
	int arr[6],arr1[6],fin[6];
	int num=12;
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
	
	for(int j=0;j<6;j++)
	{
		fin[j]=arr[j];
	}
	for(int k=0;k<6;k++)
	{
		fin[k+6]=arr1[k];
	}
	
	printf("merged array is: ");
	for(int j=0;j<12;j++)
	{
		printf("%d ",fin[j]);
	}
}