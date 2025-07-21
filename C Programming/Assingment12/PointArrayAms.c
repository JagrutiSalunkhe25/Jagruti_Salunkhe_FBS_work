//Amstrong no in given range

#include<stdio.h>

void ams(int* ,int);
int main()
{
	int arr[100];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	ams(arr,10);
	
	
}

void ams(int* ptr,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		int temp=ptr[i];
		sum=0;
	    while(temp!=0)
		{
			int rem=temp%10;
			sum=sum+rem*rem*rem;
			temp=temp/10;
		}
		if(ptr[i]==sum)
		{
			printf("%d ",ptr[i]);
		}	
	}	
}