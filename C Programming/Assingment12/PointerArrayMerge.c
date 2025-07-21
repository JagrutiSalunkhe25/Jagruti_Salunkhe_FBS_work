//merge two arrays

#include<stdio.h>
int main()
{
	int arr1[6],arr2[6];
	int num=12;
	
	InputArr(arr1);
	printf("\n");
	InputArr(arr2);
	
	merge(arr1,arr2);
	
	
	
}

void InputArr(int* arr)
{
   for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}	
}
void merge(int* ptr1,int *ptr2)
{
	int fin[12];
	for(int j=0;j<6;j++)
	{
		fin[j]=ptr1[j];
	}
	for(int k=0;k<6;k++)
	{
		fin[k+6]=ptr2[k];
	}
	
	printf("merged array is: ");
	for(int j=0;j<12;j++)
	{
		printf("%d ",fin[j]);
	}
}