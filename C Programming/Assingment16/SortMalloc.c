//sort the array

#include<stdio.h>

void sortArray(int*);
int main()
{
	int* arr=(int*)malloc(sizeof(int)*6);
	
	sortArray(arr);
}

void sortArray(int* ptr)
{
	int temp=0;
	for(int i=0;i<6;i++)
	{
		scanf("%d",&ptr[i]);
	}

	printf("\n");
	
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(ptr[i]<ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	
	for(int j=0;j<6;j++)
	{
		printf("%d ",ptr[j]);
	}
}