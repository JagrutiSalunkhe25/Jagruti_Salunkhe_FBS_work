//merge two arrays

#include<stdio.h>
#include <stdlib.h>

void InputArr(int* arr);
void OutputArr(int* arr);
int* merge(int* ptr1, int* ptr2);

int main()
{
	
	int* arr1=(int*)malloc(sizeof(int)*6);
	int* arr2=(int*)malloc(sizeof(int)*6);
	int num=12;
	
	InputArr(arr1);
	printf("\n");
	InputArr(arr2);
	
	int* ans=merge(arr1,arr2);
	OutputArr(ans);
	
	free(arr1);
	free(arr2);
	free(ans);
	
}

void InputArr(int* arr)
{
   for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}	
}

void OutputArr(int* arr)
{
   for(int i=0;i<12;i++)
	{
		printf("%d",arr[i]);
	}	
}

int* merge(int* ptr1,int *ptr2)
{
	
	int* fin=(int*)malloc(sizeof(int)*12);
	for(int j=0;j<6;j++)
	{
		fin[j]=ptr1[j];
	}
	for(int k=0;k<6;k++)
	{
		fin[k+6]=ptr2[k];
	}
	
	printf("merged array is: ");
	return fin;
}