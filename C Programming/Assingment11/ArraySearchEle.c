#include<stdio.h>


//search element in array

#include<stdio.h>
int main()
{
	int arr[6],no=45;
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	
	for(int i=0;i<6;i++)
	{
		if(arr[i]==no)
		{
			printf("number found at index %d",i);
			break;
		}
	
	}
	
	printf("not found");
}

